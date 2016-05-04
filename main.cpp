#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include <QtSql>
//#include "FileIO.h"
#include "sha1.h"
#include "Database.h"


int main(int argc, char *argv[]) {
  /*  Database db("iCyberSecurity.sqlite");
    Customer* customer;
    Testimonial* testimonial;

    db.loginAsCustomer("John Doe", "password", customer, testimonial);

    cout << customer->toString().toStdString() << endl
         << testimonial->getText().toStdString();*/


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}


/*int main(int argc, char *argv[])
{

}*/
