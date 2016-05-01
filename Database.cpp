
#include "Database.h"

Database::Database(QString databaseName){
    sqlite3_open(databaseName.toStdString().c_str(), &connection);
}

Database::~Database(){
    sqlite3_close(connection);
}

void Database::loginAsCustomer(QString username, QString password, Customer*& customer, Testimonial*& testimonial){
    unsigned* digest = encryptPassword(password);
    
    if(validateCustomerLogin(username, digest)){
        customer = new Customer(connection, username.toStdString().c_str());
        testimonial = new Testimonial(connection, username);
    }
    else{
        ostringstream ex;
        ex << "Invalid login by " << username.toStdString();
        throw new InvalidLoginException(ex.str().c_str());
    }
}

unsigned* Database::encryptPassword(QString password) const{
    SHA1 encryption;
    unsigned* digest = new unsigned[5];
    bool successfulEncryption;
    
    do{
        encryption << password.toStdString().c_str();

        successfulEncryption = encryption.Result(digest);
        
        if(!successfulEncryption){
            encryption.Reset();
            delete[] digest;
            digest = new unsigned[5];
        }
        
    }while(!successfulEncryption);
    
    return digest;
}

bool Database::validateCustomerLogin(QString username, unsigned* digest) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT count(*) FROM ics_customer_logins WHERE "
            << "cl_customer = '" << username.toStdString() << "' AND "
            << "cl_password_part_one = "   << digest[0] << " AND "
            << "cl_password_part_two = "   << digest[1] << " AND "
            << "cl_password_part_three = " << digest[2] << " AND "
            << "cl_password_part_four = "  << digest[3] << " AND "
            << "cl_password_part_five = "  << digest[4];
    
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(connection, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    
    rc = sqlite3_step(stmt);
    
    if(rc == SQLITE_ROW && sqlite3_column_int(stmt, 0) == 1){
        return true;
    }
    else{
        return false;
    }
}