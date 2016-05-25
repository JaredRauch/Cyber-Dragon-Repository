#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <QMainWindow>
#include <iterator>
#include <QObject>
#include "addcustomerwindow.h"
#include "customerinfo.h"
#include "Database.h"

namespace Ui {
class CustomerList;
}
//! A customer list window class for admins
/*!
  This class contains methods and data that functions as a window that the user uses to
 access and manipulate the data of customers that purchased an item or added by admin's
 interest.
 */
class CustomerList : public QMainWindow
{
    Q_OBJECT

public:
    //explicit CustomerList(QMap<QString, Customer>* customerMap, QWidget *parent = 0);
    static CustomerList* getInstance();
        void setDB(Database* db);
        void setUsername(QString username);
        void setPassword(QString password);
        void updateTable();
        ~CustomerList();

public slots:
        /*void on_AddButton_clicked();

            void on_CustomerWidget_cellClicked(int row, int column);

            void on_InfoButton_clicked();

            */
//    void AddCustomer(QString name, QString street, QString city, QString Zipcode);

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

    //Ui::CustomerList *ui;

    //QMap<QString, Customer>* customerMap;

    //int row;		/*!< Index for list of rows created in table widegts */
    int selectedRow;	/*!< Row value that is assigned by user's selection from clicking a row */
    int selectedColumn; /*!< Column value that is assigned by user's selection from clicking a column */

};

/*namespace Ui {
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
};*/

#endif // CUSTOMERLIST_H
