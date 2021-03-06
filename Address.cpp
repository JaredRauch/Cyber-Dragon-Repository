/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <vector>

#include "Address.h"
/*!
 * address class
 */
Address::Address(){
    db = NULL;
    customer = "";
}
/*!
 *
 * @param db
 * @param customer
 */
Address::Address(sqlite3* db, QString customer){
    this->db = db;
    this->customer = customer;
}
/*!
 *
 * @return
 */
QString Address::getStreetAddress() const{
    return searchDB("a_street_address");
}
/*!
 *
 * @return
 */
QString Address::getCity() const{
    return searchDB("a_city");
}
/*!
 *
 */
QString Address::getState() const{
    return searchDB("a_state");
}
/*!
 *
 * @return
 */
QString Address::getZip() const{
    return searchDB("a_zip");
}
/*!
 *
 * @param streetAddress
 */
void Address::setStreetAddress(QString streetAddress){
    updateField("a_street_address", streetAddress);
}
/*!
 *
 * @param city
 */
void Address::setCity(QString city){
    updateField("a_city", city);
}
/*!
 *
 * @param state
 */
void Address::setState(QString state){
    updateField("a_state", state);
}
/*!
 *
 */
void Address::setZip(QString zip){
    updateField("a_zip", zip);
}
/*!
 *
 * @return
 */
QString Address::toString() const{
    ostringstream oss;
    
    oss << getStreetAddress().toStdString() << endl
        << getCity().toStdString();
    
    if(getState() != "DC" && getState() != "D.C."){
        oss << ", " << getState().toStdString() << " ";
    }
    else{
        oss << " ";
    }
    
    oss << getZip().toStdString();
    
    return QString::fromStdString(oss.str());
}
/*!
 *
 * @param field
 * @return
 */
QString Address::searchDB(const char* field) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT "
            << field
            << " FROM ics_addresses WHERE a_customer='"
            << customer.toStdString()
            << "';";
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    
    rc = sqlite3_step(stmt);
    
    if(rc != SQLITE_DONE){
        return QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));
    }
    else{
        return "";
    }
}
/*!
 *
 * @param field
 * @param value
 */
void Address::updateField(const char* field, QString value){
    char* errMsg;
    
    ostringstream sqlCmmd;
    sqlCmmd << "UPDATE ics_addresses SET "
            << field
            << "='"
            << value.toStdString()
            << "' WHERE a_customer=" 
            << customer.toStdString();

    sqlite3_exec(db, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    
    if(errMsg != NULL){
        cerr << errMsg << endl;
    }
}
