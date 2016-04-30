/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Address.h
 * Author: james
 *
 * Created on April 26, 2016, 3:02 PM
 */

#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <sstream>
#include <QString>
#include "sqlite3.h"
using namespace std;

class Address{
    sqlite3* db;
    QString customer;
    
    QString searchDB(const char* field) const;
    void updateField(const char* field, QString value);
    
public:
    Address();
    Address(sqlite3* db, QString customer);
    
    QString getStreetAddress() const;
    QString getCity() const;
    QString getState() const;
    QString getZip() const;
    QString toString() const;
    
    void setStreetAddress(QString streetAddress);
    void setCity(QString city);
    void setState(QString state);
    void setZip(QString zip);
};

#endif /* ADDRESS_H */

