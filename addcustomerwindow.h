#ifndef ADDCUSTOMERWINDOW_H
#define ADDCUSTOMERWINDOW_H

#include <QMainWindow>
#include "errorwindow.h"
#include "Database.h"


namespace Ui {
class AddCustomerWindow;
}

//! AddCustomerWindow Class
/*!
 A window class that displays the line edits for the user to input to add a customer.
 */
class AddCustomerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddCustomerWindow(QWidget *parent = 0);
   // explicit AddCustomerWindow(Database* db, QWidget *parent = 0);
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
    Ui::AddCustomerWindow *ui;	/*!< Pointer that allows clients to access all methods inherited from the QMainWindow class */

    Database *db;		/*!< Pointer that accesses to methods available from the Database class */
};

#endif // ADDCUSTOMERWINDOW_H

