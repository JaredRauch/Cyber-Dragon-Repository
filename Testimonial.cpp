
#include "Testimonial.h"

Testimonial::Testimonial(){
    text = "";
    customer = "";
}

Testimonial::Testimonial(QString text, QString customer){
    this->text = text;
    this->customer = customer;
}

QString Testimonial::getText() const{
    return text;
}

QString Testimonial::getCustomer() const{
    return customer;
}

void Testimonial::setText(QString text){
    this->text = text;
}

void Testimonial::setCustomer(QString customer){
    this->customer = customer;
}