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


int main(int argc, char *argv[]) {
    QMap<QString, Customer>* map;
    
    map = ReadCustomerFile("customers.txt");
    
    QMap<QString, Customer>::iterator it = map->begin();
    
    while(it != map->end()){
        cout << it.value().getName().toStdString() << endl
             << it.value().getAddress().toStdString() << endl;
        
        switch(it.value().getInterest()){
            case NOT_INTERESTED : cout << "Not Interested\n"; break;
            case SOMEWHAT_INTERESTED : cout << "Somewhat Interested\n"; break;
            case VERY_INTERESTED : cout << "Very Interested\n"; break;
        }
        
        cout << (it.value().isKey() ? "key" : "nice to have")
             << endl << endl;
        
        it++;
    }
    
    SaveCustomerFile("customers.txt", map);
}
