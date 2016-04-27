/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileIO.h
 * Author: james
 *
 * Created on April 26, 2016, 3:46 PM
 */

#ifndef FILEIO_H
#define FILEIO_H

#include <QMap>
#include "Customer.h"

QMap<QString, Customer>* ReadCustomerFile(QString filename);
void SaveCustomerFile(QString filename, QMap<QString, Customer>* map);

#endif /* FILEIO_H */

