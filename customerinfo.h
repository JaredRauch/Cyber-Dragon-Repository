#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include <QMainWindow>
#include "Customer.h"

namespace Ui {
class CustomerInfo;
}
/*!
 * brief- customerInfo Class
 */
class CustomerInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerInfo(Customer& customer, QWidget *parent = 0);
    ~CustomerInfo();

private:
    Ui::CustomerInfo *ui;
};

#endif // CUSTOMERINFO_H
