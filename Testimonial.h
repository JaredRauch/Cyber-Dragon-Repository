/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Testimonial.h
 * Author: james
 *
 * Created on April 26, 2016, 4:41 PM
 */

#ifndef TESTIMONIAL_H
#define TESTIMONIAL_H

#include <iostream>
#include <sstream>
#include <QString>
#include "sqlite3.h"
using namespace std;

class Testimonial{
private:
    sqlite3* db;
    QString customer;
    
public:
    Testimonial(sqlite3* db, QString customer);
    
    QString getText() const;
    QString getCustomer() const;
    
    void setText(QString text);
};

#endif /* TESTIMONIAL_H */

