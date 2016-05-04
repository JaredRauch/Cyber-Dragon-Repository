/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Date.h"

Date::Date(){
    day = 1; month = 1; year = 1;
}

Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(const char* timestring){
    string time = string(timestring);
    year = atoi(time.substr(0, 4).c_str());
    month = atoi(time.substr(5, 2).c_str());
    day = atoi(time.substr(8, 2).c_str());
}

Date::Date(QString timestring){
    string time = timestring.toStdString();
    year = atoi(time.substr(0, 4).c_str());
    month = atoi(time.substr(5, 2).c_str());
    day = atoi(time.substr(8, 2).c_str());
}
    
int Date::getDay() const{
    return day;
}

int Date::getMonth() const{
    return month;
}

int Date::getYear() const{
    return year;
}

QString Date::toString() const{
    ostringstream oss;
    
    if(year < 1000){
        oss << "0";
        if(year < 100){
            oss << "0";
            if(year < 10){
                oss << "0";
            }
        }
    }
    oss << year;
    
    oss << "/";
    
    if(month < 10){oss << "0";}
    oss << month;
    
    oss << "/";
    
    if(day < 10){oss << "0";}
    oss << day;

    return QString::fromStdString(oss.str());
}