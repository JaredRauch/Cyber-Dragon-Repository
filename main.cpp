/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: james
 *
 * Created on April 26, 2016, 2:56 PM
 */

#include <iostream>
#include <QApplication>
#include "FileIO.h"
#include "sha1.h"
#include "Database.h"


int main() {
    Database db("iCyberSecurity.sqlite");
    Customer* customer;
    Testimonial* testimonial;
    
    db.loginAsCustomer("John Doe", "password", customer, testimonial);
    
    cout << customer->toString().toStdString() << endl
         << testimonial->getText().toStdString();   
}
