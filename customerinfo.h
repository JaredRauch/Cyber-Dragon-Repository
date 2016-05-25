#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include <QMainWindow>
#include "Customer.h"

namespace Ui {
class CustomerInfo;
}
//! CustomerInfo window class
/*! A window that displays extended information on the customer that's been clicked in the table widget. */
class CustomerInfo : public QMainWindow
{
    Q_OBJECT

public:
    //explicit CustomerInfo(QWidget *parent = 0);
    explicit CustomerInfo(Customer& customer, QWidget *parent = 0);
    ~CustomerInfo();

private:
    Ui::CustomerInfo *ui; /*!< Pointer that accesses to all methods inherited from the QMainWindow class. */
};

#endif // CUSTOMERINFO_H
