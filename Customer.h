/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Customer.h
 * Author: james
 *
 * Created on April 26, 2016, 2:59 PM
 */

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <list>
#include "sqlite3.h"
#include "Purchase.h"

enum Interest{NOT_INTERESTED, SOMEWHAT_INTERESTED, VERY_INTERESTED, INVALID_VALUE};

class Customer{
private:
    sqlite3* db;
    QString name;
    
    sqlite3_stmt* searchDB(const char* field, const char* table, const char* primaryKey) const;
    
    template<typename T> 
    void updateField(const char* field, T value, const char* table, const char* primaryKey);
    
public:
    Customer(sqlite3* db, QString name);
    
    QString getName() const;
    QString getStreetAddress() const;
    QString getCity() const;
    QString getState() const;
    QString getZip() const;
    Interest getInterest() const;
    bool isKey() const;
    list<Purchase>* getPurchases() const;
    QString toString() const;
    
    
    void setName(QString name);
    void setStreetAddress(QString streetAddress);
    void setCity(QString city);
    void setState(QString state);
    void setZip(QString zip);
    void setInterest(Interest interest);
    void setIsKey(bool isKey);
    list<Purchase>* addPurchase(Service service, double price, Date startDate, Date endDate);
};


#endif /* CUSTOMER_H */

