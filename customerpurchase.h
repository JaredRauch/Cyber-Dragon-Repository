#ifndef CUSTOMERPURCHASE_H
#define CUSTOMERPURCHASE_H

#include <QDialog>
#include "Customer.h"

namespace Ui {
class customerPurchase;
}

class customerPurchase : public QDialog
{
    Q_OBJECT

public:
    explicit customerPurchase(Customer* customer, QWidget *parent = 0);
    ~customerPurchase();

private slots:
   // void on_comboBox_activated(const QString &arg1);

   // void on_comboBox_currentIndexChanged(int index);

   void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::customerPurchase *ui;
    int row;
    int col;

    Customer* customer;
};

#endif // CUSTOMERPURCHASE_H
