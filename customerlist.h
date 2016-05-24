#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <QMainWindow>
#include <iterator>
#include <QObject>
//#include "addcustomerwindow.h"
#include "customerinfo.h"
#include "Database.h"

namespace Ui {
class CustomerList;
}

class CustomerList : public QMainWindow
{
    Q_OBJECT

public:
    static CustomerList* getInstance();
    void setDB(Database* db);
    void setUsername(QString username);
    void setPassword(QString password);
    void updateTable();
    ~CustomerList();

private slots:
    void on_AddButton_clicked();

    void on_CustomerWidget_cellClicked(int row, int column);

    void on_InfoButton_clicked();

    void on_refreshButton_clicked();

private:
    explicit CustomerList(QWidget *parent = 0);
    void populateList();
    void emptyTable();
    QMap<QString, Customer>* customerMap;
    Database* db;

    Ui::CustomerList *ui;

    QString username;
    QString password;

    static bool instantiated;
    static CustomerList* global;

    int row;
};


namespace Ui {
class AddCustomerWindow;
}

class AddCustomerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddCustomerWindow(Database* db, QWidget *parent = 0);
    ~AddCustomerWindow();

signals:

    void SetCustomer(QString customer, QString streetAd, QString cityAd, QString Zip);

private slots:

    void on_rejectButton_clicked();

    void on_acceptButton_clicked();

    void on_not_interested_radio_clicked();

    void on_some_interested_radio_clicked();

    void on_very_interested_radio_clicked();

private:
    Ui::AddCustomerWindow *ui;


    Database *db;
};

#endif // CUSTOMERLIST_H



/*#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <QMainWindow>
#include <iterator>
#include <QObject>
//#include "addcustomerwindow.h"
#include "customerinfo.h"
#include "Database.h"

namespace Ui {
class CustomerList;
}

class CustomerList : public QMainWindow
{
    Q_OBJECT

public:
    static CustomerList* getInstance();
    void setDB(Database* db);
    void setUsername(QString username);
    void setPassword(QString password);
    void updateTable();
    ~CustomerList();

private slots:
    void on_AddButton_clicked();

    void on_CustomerWidget_cellClicked(int row, int column);

    void on_InfoButton_clicked();

    void on_refreshButton_clicked();

private:
    explicit CustomerList(QWidget *parent = 0);
    void populateList();
    void emptyTable();
    QMap<QString, Customer>* customerMap;
    Database* db;

    Ui::CustomerList *ui;

    QString username;
    QString password;

    static bool instantiated;
    static CustomerList* global;

    int row;
};


namespace Ui {
class AddCustomerWindow;
}

class AddCustomerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddCustomerWindow(Database* db, QWidget *parent = 0);
    ~AddCustomerWindow();

signals:

    void SetCustomer(QString customer, QString streetAd, QString cityAd, QString Zip);

private slots:

    void on_rejectButton_clicked();

    void on_acceptButton_clicked();

    void on_not_interested_radio_clicked();

    void on_some_interested_radio_clicked();

    void on_very_interested_radio_clicked();

private:
    Ui::AddCustomerWindow *ui;


    Database *db;
};

#endif // CUSTOMERLIST_H
*/
