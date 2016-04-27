/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Address.h"

Address::Address(){
    streetAddress = "";
    city = "";
    state = "";
    zip = "";
}

Address::Address(QString streetAddress, QString city, QString state, QString zip){
    this->streetAddress = streetAddress;
    this->city = city;
    this->state = state;
    this->zip = zip;
}

QString Address::getStreetAddress() const{
    return streetAddress;
}

QString Address::getCity() const{
    return city;
}

QString Address::getState() const{
    return state;
}

QString Address::getZip() const{
    return zip;
}
    
QString Address::toString() const{
    ostringstream oss;
    
    oss << streetAddress.toStdString() << endl
        << city.toStdString();
    
    if(state != "DC" && state != "D.C."){
        oss << ", " << state.toStdString() << " ";
    }
    else{
        oss << " ";
    }
    
    oss << zip.toStdString();
    
    return QString::fromStdString(oss.str());
}

void Address::setStreetAddress(QString streetAddress){
    this->streetAddress = streetAddress;
}

void Address::setCity(QString city){
    this->city = city;
}

void Address::setState(QString state){
    this->state = state;
}

void Address::setZip(QString zip){
    this->zip = zip;
}