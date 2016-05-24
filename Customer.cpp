/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Customer.h"
#include "Date.h"
/*!
 *
 * @param db
 * @param name
 */
Customer::Customer(sqlite3* db, QString name){
    this->db = db;
    this->name = name;
}
 /*!
  *
  * @return
  */
QString Customer::getName() const{
    return name;
}
/*!
 *
 * @return
 */
QString Customer::getStreetAddress() const{
    sqlite3_stmt* stmt = searchDB("a_street_address", "ics_addresses", "a_customer");
    return QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));
}
/*!
 *
 * @return
 */
QString Customer::getCity() const{
    sqlite3_stmt* stmt = searchDB("a_city", "ics_addresses", "a_customer");
    return QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));
}
/*!
 *
 * @return
 */
QString Customer::getState() const{
    sqlite3_stmt* stmt = searchDB("a_state", "ics_addresses", "a_customer");
    return QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));
}
/*!
 *
 * @return
 */
QString Customer::getZip() const{
    sqlite3_stmt* stmt = searchDB("a_zip", "ics_addresses", "a_customer");
    return QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));
}
/*!
 *
 * @return
 */
QString Customer::getAddress() const{
    ostringstream oss;
    oss << getStreetAddress().toStdString() << endl;
    oss << getCity().toStdString();
    
    if(getCity() != "DC" && getCity() != "D.C."){
        oss << ", " << getState().toStdString();
    }
    
    oss << " " << getZip().toStdString();
    
    return QString(oss.str().c_str());
}
/*!
 *
 * @return
 */
Interest Customer::getInterest() const{
    sqlite3_stmt* stmt = searchDB("c_interest", "ics_customers", "c_name");
    return (Interest)sqlite3_column_int(stmt, 0);
}
/*!
 *
 * @return
 */
bool Customer::isKey() const{
    sqlite3_stmt* stmt = searchDB("c_is_key", "ics_customers", "c_name");
    return (bool)sqlite3_column_int(stmt, 0);
}
/*!
 *
 * @return
 */
list<Purchase>* Customer::getPurchases() const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT p_order_id FROM ics_purchases WHERE p_customer = '" << name.toStdString() << "'";
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    rc = sqlite3_step(stmt);
    
    list<Purchase>* purchases = new list<Purchase>();
    while(rc != SQLITE_DONE){
        purchases->push_back(Purchase(db, sqlite3_column_int(stmt, 0)));
        rc = sqlite3_step(stmt);
    }
    
    return purchases;
}
/*!
 *
 * @return
 */
QString Customer::toString() const{
    ostringstream oss;
    
    oss << name.toStdString() << endl
        << getStreetAddress().toStdString() << endl
        << getCity().toStdString();
    
    if(getState() != "DC" && getState() != "D.C."){
        oss << ", " << getState().toStdString() << " ";
    }
    else{
        oss << " ";
    }
    
    oss << getZip().toStdString() << endl
        << getInterest() << endl
        << isKey();
    
    return QString::fromStdString(oss.str());
}
/*!
 *
 * @param name
 */
void Customer::setName(QString name){
    updateField("c_name", name.toStdString(), "ics_customers", "c_name");
}
/*!
 *
 * @param streetAddress
 */
void Customer::setStreetAddress(QString streetAddress){
    updateField("a_street_address", streetAddress.toStdString(), "ics_addresses", "a_customer");
}
/*!
 *
 * @param city
 */
void Customer::setCity(QString city){
    updateField("a_city", city.toStdString(), "ics_addresses", "a_customer");
}
/*!
 *
 * @param state
 */
void Customer::setState(QString state){
    updateField("a_state", state.toStdString(), "ics_addresses", "a_customer");
}
/*!
 *
 * @param zip
 */
void Customer::setZip(QString zip){
    updateField("a_zip", zip.toStdString(), "ics_addresses", "a_customer");
}
 /*!
  *
  * @param interest
  */
void Customer::setInterest(Interest interest){
    updateField("c_interest", (int)interest, "ics_customers", "c_name");
}
/*!
 *
 * @param isKey
 */
void Customer::setIsKey(bool isKey){
    updateField("c_is_key", int(isKey), "ics_customers", "c_name");
}
/*!
 *
 * @param service
 * @param price
 * @param startDate
 * @param endDate
 * @return
 */
list<Purchase>* Customer::addPurchase(Service service, double price, Date startDate, Date endDate){
    ostringstream sqlCmmd;
    sqlCmmd << "INSERT INTO ics_purchases (p_customer, p_service, p_price, p_start_date, p_end_date) VALUES ('"
            << name.toStdString() << "', "
            << service << ", "
            << price << ", '"
            << startDate.toString().toStdString() << "', '"
            << endDate.toString().toStdString() << "')";
    
    char* errMsg;
    sqlite3_exec(db, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    if(errMsg != NULL){
        cerr << errMsg;
    }
    
    return getPurchases();
}
/*!
 *
 * @param field
 * @param table
 * @param primaryKey
 * @return
 */
sqlite3_stmt* Customer::searchDB(const char* field, const char* table, const char* primaryKey) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT "
            << field
            << " FROM "
            << table
            << " WHERE "
            << primaryKey 
            << "='"
            << name.toStdString()
            << "';";
    
    sqlite3_stmt* stmt;

    int rc = sqlite3_prepare_v2(db, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    
    rc = sqlite3_step(stmt);
    
    return stmt;
}
/*!
 *
 * @param field
 * @param value
 * @param table
 * @param primaryKey
 */
template<typename T>
void Customer::updateField(const char* field, T value, const char* table, const char* primaryKey){
    char* errMsg;
    
    ostringstream sqlCmmd;
    sqlCmmd << "UPDATE "
            << table
            << " SET "
            << field
            << "='"
            << value
            << "' WHERE "
            << primaryKey
            << "="
            << name.toStdString();

    sqlite3_exec(db, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    
    if(errMsg != NULL){
        cerr << errMsg << endl;
    }
}
