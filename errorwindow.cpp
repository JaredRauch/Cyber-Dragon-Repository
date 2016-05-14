#include "errorwindow.h"
#include "ui_errorwindow.h"

ErrorWindow::ErrorWindow(int index, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ErrorWindow)
{
    ui->setupUi(this);

    switch(index)
    {
    case AddCustomerError: ui->label->setText("Please fill all information requred!");
                           break;

    case RemoveFromListError: ui->label->setText("Cannot"
                                                 " remove customers from empty list!");
                              break;

    case Remove_That_Doesnt_Exist: ui->label->setText("Cannot remove a customer that"
                                                      "does not exist");
    }
}

ErrorWindow::~ErrorWindow()
{
    delete ui;
}

void ErrorWindow::on_pushButton_clicked()
{
    hide();
}
