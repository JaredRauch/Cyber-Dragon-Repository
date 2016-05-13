#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include "Database.h"
#include "customerlist.h"

namespace Ui {
class adminLogin;
}

class adminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminLogin(Database *db, QWidget *parent = 0);
    ~adminLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminLogin *ui;
    QMap<QString, Customer> *customerMap;
    Database *db;
};

#endif // ADMINLOGIN_H
