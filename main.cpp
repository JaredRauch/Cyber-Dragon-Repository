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
#include <vector>
#include "Database.h"
#include "Purchase.h"


int main() {
    Database db("iCyberSecurity.sqlite");
    
    QMap<QString, Customer>* map;
    QSet<Testimonial>* set;
    db.loginAsAdmin("admin", "pass", map, set);
    
    QMap<QString, Customer>::iterator it = map->begin();
    
    list<Purchase>* purchases;
    while(it != map->end()){
        cout << it->toString().toStdString() << endl;
        
        purchases = it->getPurchases();
        
        list<Purchase>::iterator purchIt = purchases->begin();
        
        if(purchIt == purchases->end()){
            cout << endl;
        }
        
        while(purchIt != purchases->end()){
            cout << "     " << purchIt->getCustomerName().toStdString() << endl
                 << "     " << purchIt->getService() << endl
                 << "     " << purchIt->getPrice()   << endl
                 << "     " << purchIt->getStartDate().toString().toStdString() << endl
                 << "     " << purchIt->getEndDate().toString().toStdString()   << endl
                 << endl;
            purchIt++;
        }
        
        
        it++;
    }
}
