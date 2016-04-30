/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Customer.h"

Customer::Customer(sqlite3* db, QString name){
    this->db = db;
    this->name = name;
    this->address = Address(db, name);
}
    
QString Customer::getName() const{
    return name;
}

QString Customer::getAddress() const{
    return address.toString();
}

Address Customer::getAddressObject() const{
    return address;
}

Interest Customer::getInterest() const{
    sqlite3_stmt* stmt;
    int rc = searchDB(stmt, "c_interest", "ics_customers");
    
    if(rc == SQLITE_ROW){
        return Interest(sqlite3_column_int(stmt, 0));
    }
    else{
        return INVALID_VALUE;
    }
}

bool Customer::isKey() const{
    sqlite3_stmt* stmt;
    int rc = searchDB(stmt, "c_is_key", "ics_customers");
    
    if(rc != SQLITE_DONE){
        return (bool)sqlite3_column_int(stmt, 0);
    }
    else{
        return false;
    }
}

QString Customer::toString() const{
    ostringstream oss;
    
    oss << name.toStdString() << endl
        << getAddress().toStdString() << endl
        << getInterest() << endl
        << isKey();
    
    return QString::fromStdString(oss.str());
}
    
void Customer::setName(QString name){
    char* errMsg;
    ostringstream sqlCmmd;
    sqlCmmd << "UPDATE ics_customers SET c_name = "
            << name.toStdString()
            << "WHERE c_name = "
            << this->name.toStdString();
    
    sqlite3_exec(db, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    
    if(errMsg != NULL){
        cerr << errMsg;
    }
}

void Customer::setStreetAddress(QString streetAddress){
    address.setStreetAddress(streetAddress);
}

void Customer::setCity(QString city){
    address.setCity(city);
}

void Customer::setState(QString state){
    address.setState(state);
}

void Customer::setZip(QString zip){
    address.setZip(zip);
}
    
void Customer::setInterest(Interest interest){
    updateField("c_interest", (int)interest, "ics_customers", "c_name");
}

void Customer::setIsKey(bool isKey){
    updateField("c_is_key", int(isKey), "ics_customers", "c_name");
}

int Customer::searchDB(sqlite3_stmt*& stmt, const char* field, const char* table) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT "
            << field
            << " FROM "
            << table
            << " WHERE c_name='"
            << name.toStdString()
            << "';";

    int rc = sqlite3_prepare_v2(db, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    
    rc = sqlite3_step(stmt);
    
    return rc;
}

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