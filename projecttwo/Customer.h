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
#include "sqlite3.h"
#include "Address.h"

enum Interest{NOT_INTERESTED, SOMEWHAT_INTERESTED, VERY_INTERESTED, INVALID_VALUE};

class Customer{
private:
    sqlite3* db;
    QString name;
    Address address;
    
    int searchDB(sqlite3_stmt*& stmt, const char* field, const char* table) const;
    template<typename T> void updateField(const char* field, T value, const char* table, const char* primaryKey);
    
public:
    Customer(sqlite3* db, QString name);
    
    QString getName() const;
    QString getAddress() const;
    Address getAddressObject() const;
    Interest getInterest() const;
    bool isKey() const;
    QString toString() const;
    
    void setName(QString name);
    void setStreetAddress(QString streetAddress);
    void setCity(QString city);
    void setState(QString state);
    void setZip(QString zip);
    void setInterest(Interest interest);
    void setIsKey(bool isKey);
};


#endif /* CUSTOMER_H */

