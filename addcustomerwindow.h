#ifndef ADDCUSTOMERWINDOW_H
#define ADDCUSTOMERWINDOW_H

#include <QMainWindow>
#include "errorwindow.h"

namespace Ui {
class AddCustomerWindow;
}

class AddCustomerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddCustomerWindow(QWidget *parent = 0);
    ~AddCustomerWindow();

private slots:

    void on_rejectButton_clicked();

    void on_acceptButton_clicked();

private:
    Ui::AddCustomerWindow *ui;
};

#endif // ADDCUSTOMERWINDOW_H
