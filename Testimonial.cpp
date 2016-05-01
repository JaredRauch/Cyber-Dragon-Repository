
#include "Testimonial.h"

Testimonial::Testimonial(sqlite3* db, QString customer){
    this->db = db;
    this->customer = customer;
}

QString Testimonial::getText() const{
    ostringstream sqlCmmd;
    sqlCmmd << "SELECT t_text FROM ics_testimonials WHERE t_customer = '" << customer.toStdString() << "'";
    sqlite3_stmt* stmt;
    int rc = sqlite3_prepare_v2(db, sqlCmmd.str().c_str(), -1, &stmt, NULL);
    
    rc = sqlite3_step(stmt);
    
    if(rc == SQLITE_ROW){
        return QString(static_cast<const char*>(sqlite3_column_blob(stmt, 0)));
    }
    else{
        return "";
    }
}

QString Testimonial::getCustomer() const{
    return customer;
}

void Testimonial::setText(QString text){
    ostringstream sqlCmmd;
    sqlCmmd << "UPDATE ics_testimonials SET t_text='" << text.toStdString() << "' WHERE t_customer=" << customer.toStdString();
    
    char* errMsg;
    sqlite3_exec(db, sqlCmmd.str().c_str(), NULL, 0, &errMsg);
    
    if(errMsg != NULL){
        cerr << errMsg << endl;
    }
}
