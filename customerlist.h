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
    explicit CustomerList(QMap<QString, Customer>* customerMap, QWidget *parent = 0);
    ~CustomerList();

public slots:

//    void AddCustomer(QString name, QString street, QString city, QString Zipcode);

private slots:
    void on_AddButton_clicked();

    void on_CustomerWidget_cellClicked(int row, int column);

    void on_InfoButton_clicked();

private:
    Ui::CustomerList *ui;

    QMap<QString, Customer>* customerMap;

    int row;		/*!< Index for list of rows created in table widegts */
    int selectedRow;	/*!< Row value that is assigned by user's selection from clicking a row */
    int selectedColumn; /*!< Column value that is assigned by user's selection from clicking a column */
};

#endif // CUSTOMERLIST_H
