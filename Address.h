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

#include <sstream>
#include <QString>
using namespace std;

enum StateCode{
    AL, AK, AS, AZ, AR, CA, CO, CT, DE, DC, FL, GA, GU, HI, ID, IL, IN, IA, KS,
    KY, LA, ME, MD, MH, MA, MI, FM, MN, MS, MO, MT, NE, NV, NH, NJ, NM, NY, NC,
    ND, MP, OH, OK, OR, PW, PA, PR, RI, SC, SD, TN, TX, UT, VT, VA, VI, WA, WV,
    WI, WY
};

class Address{
    QString streetAddress;
    QString city;
    QString state;
    QString zip;
    
public:
    Address();
    Address(QString streetAddress, QString city, QString state, QString zip);
    
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

