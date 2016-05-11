/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.h
 * Author: james
 *
 * Created on May 3, 2016, 4:25 PM
 */

#ifndef PRODUCT_H
#define PRODUCT_H

#include "sqlite3.h"
#include "Date.h"

enum Service{
    PERSONAL, ENTERPRISE_WORKSTATION, ENTERPRISE_SERVER, ENTERPRISE_BUNDLE
};

class Purchase{
private:
    sqlite3* db;
    int      orderID;
    
    sqlite3_stmt* searchDB(const char* field) const;
    
public:
    Purchase();
    Purchase(sqlite3* db, int orderID);
    
    int     getOrderID() const;
    QString getCustomerName() const;
    Service getService() const;
    double  getPrice() const;
    Date    getStartDate() const;
    Date    getEndDate() const;
};

#endif /* PRODUCT_H */

