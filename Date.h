/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: james
 *
 * Created on May 3, 2016, 4:16 PM
 */

#ifndef DATE_H
#define DATE_H

#include <sstream>
#include <string>
#include <QString>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
    
public:
    Date();
    Date(int day, int month, int year);
    Date(const char* timestring);
    Date(QString timestring);
    
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    QString toString() const;
};

#endif /* DATE_H */

