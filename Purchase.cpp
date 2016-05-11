/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Purchase.h"

Purchase::Purchase(){
    db = NULL;
    orderID = -1;
}

Purchase::Purchase(sqlite3* db, int orderID){
    this->db = db;
    this->orderID = orderID;
}
    
int Purchase::getOrderID() const{
    return orderID;
}

QString Purchase::getCustomerName() const{
    return QString(static_cast<const char*>(sqlite3_column_blob(searchDB("p_customer"), 0)));
}
    
Service Purchase::getService() const{
    return Service(sqlite3_column_int(searchDB("p_service"), 0));
}
    
double Purchase::getPrice() const{
    return sqlite3_column_double(searchDB("p_price"), 0);
}

Date Purchase::getStartDate() const{
    return Date(QString(static_cast<const char*>(sqlite3_column_blob(searchDB("p_start_date"), 0))));
}
    
Date Purchase::getEndDate() const{
    return Date(QString(static_cast<const char*>(sqlite3_column_blob(searchDB("p_end_date"), 0))));
}

sqlite3_stmt* Purchase::searchDB(const char* field) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT "
            << field
            << " FROM ics_purchases WHERE p_order_id="
            << orderID
            << ";";
    
    sqlite3_stmt* stmt;

    int rc = sqlite3_prepare_v2(db, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    
    rc = sqlite3_step(stmt);
    
    return stmt;
}
