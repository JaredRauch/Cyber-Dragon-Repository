/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Customer.h"

Customer::Customer(QString name, Address address, Interest interest, bool isKey){
    this->name = name;
    this->address = address;
    this->interest = interest;
    this->key = isKey;
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
    return interest;
}

QString Customer::toString() const{
    ostringstream oss;
    
    oss << name.toStdString() << endl
        << address.getStreetAddress().toStdString() << endl
        << address.getCity().toStdString() << endl
        << address.getState().toStdString() << endl
        << address.getZip().toStdString() << endl
        << interest << endl
        << key;
    
    return QString::fromStdString(oss.str());
}

bool Customer::isKey() const{
    return key;
}
    
void Customer::setName(QString name){
    this->name = name;
}
   
void Customer::setAddress(Address address){
    this->address = address;
}

void Customer::setStreetAddress(QString streetAddress){
    this->address.setStreetAddress(streetAddress);
}

void Customer::setCity(QString city){
    this->address.setCity(city);
}

void Customer::setState(QString state){
    this->address.setState(state);
}

void Customer::setZip(QString zip){
    this->address.setZip(zip);
}
    
void Customer::setInterest(Interest interest){
    this->interest = interest;
}

void Customer::setIsKey(bool isKey){
    this->key = isKey;
}
