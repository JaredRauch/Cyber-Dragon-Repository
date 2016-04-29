/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <string>
#include <fstream>
#include <QMap>
#include <QSet>
#include "Customer.h"
#include "Testimonial.h"

QMap<QString, Customer>* ReadCustomerFile(QString filename){
    QMap<QString, Customer>* map = new QMap<QString, Customer>();
    ifstream input(filename.toStdString().c_str());
    
    if(input.is_open()){
        string delim;
        string name;
        string streetAddress;
        string city;
        string state;
        string zip;
        string interest;
        string isKey;
        
        getline(input, delim);
        
        while(!input.eof()){
            getline(input, name);
            getline(input, streetAddress);
            getline(input, city);
            getline(input, state);
            getline(input, zip);
            getline(input, interest);
            getline(input, isKey);
            
            map->insert(QString::fromStdString(name),
                        Customer(QString::fromStdString(name), 
                                Address(QString::fromStdString(streetAddress), 
                                        QString::fromStdString(city), 
                                        QString::fromStdString(state), 
                                        QString::fromStdString(zip)), 
                                (Interest)strtol(interest.c_str(), NULL, 10), 
                                (isKey.compare("0") == 0 ? false : true))
                        );
            
            getline(input, delim);
        }
        
        input.close();
    }
    
    return map;
}

void SaveCustomerFile(QString filename, QMap<QString, Customer>* map){
    ofstream output(filename.toStdString().c_str());
    
    QMap<QString, Customer>::iterator it = map->begin();
    
    const string DELIM = "-";
    
    if(it != map->end()){
        output << DELIM 
               << endl
               << it.value().toString().toStdString();
    }
    
    while(it != map->end()){ 
        output << endl
               << DELIM 
               << endl
               << it.value().toString().toStdString();
        it++;
    }
    
    output.close();
}

QSet<Testimonial>* ReadTestimonialFile(QString filename){
    QSet<Testimonial>* set = new QSet<Testimonial>();
    ifstream input(filename.toStdString().c_str());
    
    if(input.is_open()){
        string text;
        string customer;
        string delim;
        
        getline(input, delim);
        
        while(!input.eof()){
            getline(input, text);
            getline(input, customer);
            
            set->insert(Testimonial(QString::fromStdString(text),
                                    QString::fromStdString(customer)));
            
            getline(input, delim);
        }
        
        input.close();
    }
    
    return set;
}

void SaveTestimonialFile(QString filename, QSet<Testimonial>* set){
    ofstream output(filename.toStdString().c_str());
    
    QSet<Testimonial>::iterator it = set->begin();
    
    const string DELIM = "-";
    
    if(it != set->end()){
        output << DELIM 
               << endl
               << it->getText().toStdString()
               << endl
               << it->getCustomer().toStdString();
    }
    
    while(it != set->end()){ 
        output << endl
               << DELIM 
               << endl
               << it->getText().toStdString()
               << endl
               << it->getCustomer().toStdString();
        it++;
    }
    
    output.close();
}