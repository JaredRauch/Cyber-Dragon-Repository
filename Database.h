

#ifndef DATABASE_H
#define DATABASE_H

#include <QMap>
#include <QSet>
#include <exception>
#include <QDebug>
#include "Customer.h"
#include "Testimonial.h"
#include "sha1.h"
#include "sqlite3.h"
using namespace std;

class InvalidLoginException : public exception{
private:
    const char* ex;
    
public:
    InvalidLoginException(const char* text){ex = text;}
    virtual ~InvalidLoginException() throw(){}
    
    virtual const char* what() const throw(){
        return ex;
    }
};

class Database{
private:
    sqlite3* connection;
    
    unsigned* encryptPassword(QString password) const;
    bool validateCustomerLogin(QString username, unsigned* digest) const;
    bool validateAdminLogin(QString username, unsigned* digest) const;
    
public:
    Database(QString databaseName);
    ~Database();
    
    Customer* loginAsCustomer(QString username, QString password);
    QMap<QString, Customer>* loginAsAdmin(QString username, QString password);
    
    void registerCustomer(QString username, QString password);
    void registerAdmin(QString username, QString password);
    
    void AddCustomer(QString  name, 
                     QString  streetAddress, QString city, QString state, QString zip,
                     Interest interest,
                     bool     isKey);
};

#endif /* DATABASE_H */

