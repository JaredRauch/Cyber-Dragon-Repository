

#ifndef DATABASE_H
#define DATABASE_H

#include <QMap>
#include <QSet>
#include <exception>
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
    virtual ~InvalidLoginException() throw(){};
    
    virtual const char* what() const throw(){
        return ex;
    }
};

class Database{
private:
    sqlite3* connection;
    
    unsigned* encryptPassword(QString password) const;
    bool validateCustomerLogin(QString username, unsigned* digest) const;
    void getCustomerObject(QString username) const;
    void getTestimonialObject(QString username) const;
    
public:
    Database(QString databaseName);
    ~Database();
    
    void loginAsCustomer(QString username, QString password, Customer*& customer, Testimonial*& testimonial);
    void loginAsAdmin(QString username, QString password, QMap<QString, Customer>*& customerMap, QSet<Testimonial>*& testimonials);
    
};

#endif /* DATABASE_H */

