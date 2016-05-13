
#include "Database.h"
#include <QDebug>

Database::Database(QString databaseName){
    sqlite3_open(databaseName.toStdString().c_str(), &connection);
}

Database::~Database(){
    sqlite3_close(connection);
}

Customer* Database::loginAsCustomer(QString username, QString password){
    unsigned* digest = encryptPassword(password);
    Customer* customer;
    
    if(validateCustomerLogin(username, digest)){
        ostringstream sqlCmmd;
        sqlCmmd << "SELECT cl_customer FROM ics_customer_logins WHERE cl_username = '"
                << username << "'";
        sqlite3_stmt* stmt;
        sqlite3_prepare_v2(connection, sqlCmmd.toStr().c_str(), -1, &stmt, NULL);
        rc = sqlite3_step(stmt);
        customer = new Customer(connection, QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0))));
    }
    else{
        ostringstream ex;
        ex << "Invalid login by " << username.toStdString();
        throw new InvalidLoginException(ex.str().c_str());
    }

    return customer;
}

QMap<QString, Customer>* Database::loginAsAdmin(QString username, QString password){
    unsigned* digest = encryptPassword(password);
    QMap<QString, Customer>* customerMap = new QMap<QString, Customer>();

    if(validateAdminLogin(username, digest)){
        sqlite3_stmt* stmt;
        int rc = sqlite3_prepare_v2(connection, "SELECT c_name FROM ics_customers", -1, &stmt, NULL); 
        rc = sqlite3_step(stmt);
        
        while(rc != SQLITE_DONE){
            QString name = QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));

            customerMap->insert(name, Customer(connection, name));

            rc = sqlite3_step(stmt);
        }
    }
    else{
        ostringstream ex;
        ex << "Invalid login by " << username.toStdString();
        throw new InvalidLoginException(ex.str().c_str());
    }

    return customerMap;
}

void Database::AddCustomer(QString  name, 
                     QString  streetAddress, QString city, QString state, QString zip,
                     Interest interest,
                     bool     isKey){
    if(checkKeyCollision(ics_customers, c_name, name)){
        throw new KeyCollisionException("Customer already has an account.");
    }

    ostringstream customer;
    customer << "INSERT INTO ics_customers (c_name, c_interest, c_is_key) VALUES ('"
             << name.toStdString()       << "', "
             << interest                 << ", "
             << (int)isKey               << ")";
    
    ostringstream address;
    address << "INSERT INTO ics_addresses (a_customer, a_street_address, a_city, a_state, a_zip) VALUES ('"
            << name.toStdString()          << "', '"
            << streetAddress.toStdString() << "', '"
            << city.toStdString()          << "', '"
            << state .toStdString()        << "', '"
            << zip.toStdString()           << "')";
    
    char* errMsg;
    sqlite3_exec(connection, customer.str().c_str(), NULL, 0, &errMsg);
    
    if(errMsg != NULL){
        cerr << errMsg;
    }
    else{
        sqlite3_exec(connection, address.str().c_str(), NULL, 0, &errMsg);
        
        if(errMsg!= NULL){
            cerr << errMsg;
        }
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
    
    return rc == SQLITE_ROW && sqlite3_column_int(stmt, 0) == 1;
}

bool Database::validateAdminLogin(QString username, unsigned* digest) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT count(*) FROM ics_admin_logins WHERE "
            << "al_admin = '" << username.toStdString() << "' AND "
            << "al_password_part_one = "   << digest[0] << " AND "
            << "al_password_part_two = "   << digest[1] << " AND "
            << "al_password_part_three = " << digest[2] << " AND "
            << "al_password_part_four = "  << digest[3] << " AND "
            << "al_password_part_five = "  << digest[4];

    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(connection, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    sqlite3_step(stmt);

    return sqlite3_column_int(stmt, 0) == 1;
}

bool checkKeyCollision(QString table, QString field, QString value) const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT count(*) FROM "
            << table
            << " WHERE "
            << field
            << " = "
            << value;
    sqlite3_stmt* stmt;
    sqlite3_prepare_v2(connection, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    sqlite3_step(stmt);
    return sqlite3_column_int(stmt, 0) == 1;
}

void Database::registerCustomer(QString username, QString password, QString customer){
    unsigned* digest = encryptPassword(password);

    if(checkKeyCollision(ics_customer_logins, cl_username, username) ||
       checkKeyCollision(ics_customer_logins, cl_customer, customer)){
        throw new KeyCollisionException("Username already exists or customer already has an account.");
    }
    
    ostringstream sqlCmmd;
    sqlCmmd << "INSERT INTO ics_customer_logins (cl_customer, cl_password_part_one, "
            << "cl_password_part_two, cl_password_part_three, cl_password_part_four, "
            << "cl_password_part_five, cl_username) VALUES ('"
            << customer.toStdString()  << "', "
            << digest[0] << ",
            << digest[1] << ", "
            << digest[2] << ", "
            << digest[3] << ", "
            << digest[4] << ", '"
            << username.toStdString() << "'";
    
    char* errMsg;
    sqlite3_exec(connection, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    if(errMsg != NULL){
        cerr << errMsg << endl;
    }
}

void Database::registerAdmin(QString username, QString password){
    unsigned* digest = encryptPassword(password);

    if(checkKeyCollision(ics_admin_logins, al_admin, username)){
        throw new KeyCollisionException("Admin username already exists.");
    }
    
    ostringstream sqlCmmd;
    sqlCmmd << "INSERT INTO ics_admin_logins (al_admin, al_password_part_one, "
            << "al_password_part_two, al_password_part_three, al_password_part_four, "
            << "al_password_part_five) VALUES ('"
            << username.toStdString()  << "', "
            << digest[0] << ", "
            << digest[1] << ", "
            << digest[2] << ", "
            << digest[3] << ", "
            << digest[4] << ")";
    
    char* errMsg;
    sqlite3_exec(connection, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    if(errMsg != NULL){
        cerr << errMsg << endl;
    }
}
