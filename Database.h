

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

class KeyCollisionException : public exception{
private:
    const char* ex;

public:
    KeyCollisionException(const char* text){ex = text;}
    virtual ~KeyCollisionException() throw(){}

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
    bool checkKeyCollision(string table, string field, string value) const;
    void removeFromTable(string table, string primaryField, string key);
    
public:
    Database(QString databaseName);
    ~Database();
    
    Customer* loginAsCustomer(QString username, QString password);
    QMap<QString, Customer>* loginAsAdmin(QString username, QString password);
    
    void registerCustomer(QString username, QString password, QString customer);
    void registerAdmin(QString username, QString password);
    
    void AddCustomer(QString  name, 
                     QString  streetAddress, QString city, QString state, QString zip,
                     Interest interest,
                     bool     isKey);
    void DeleteCustomer(QString name);
};

#endif /* DATABASE_H */

