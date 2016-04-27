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

#include <QString>
using namespace std;

class Testimonial{
private:
    QString text;
    QString customer;
    
public:
    Testimonial();
    Testimonial(QString text, QString customer);
    
    QString getText() const;
    QString getCustomer() const;
    
    void setText(QString text);
    void setCustomer(QString customer);
};

#endif /* TESTIMONIAL_H */

