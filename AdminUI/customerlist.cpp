#include "customerlist.h"
#include "ui_customerlist.h"

CustomerList::CustomerList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerList)
{
    ui->setupUi(this);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->RemoveButton->setEnabled(false);

    if(ui->CustomerWidget->rowCount() == 0)
    {
        ui->EditButton->setEnabled(false);
    }
    else
    {
        ui->EditButton->setEnabled(true);
    }
}

CustomerList::~CustomerList()
{
    delete ui;
}

void CustomerList::on_AddButton_clicked()
{
    AddCustomerWindow *window = new AddCustomerWindow;

    window->show();
}

void CustomerList::on_CustomerWidget_cellClicked(int row, int column)
{
    ui->CustomerWidget->selectRow(row);

    ui->InfoButton->setEnabled(true);

    ui->RemoveButton->setEnabled(true);
}


void CustomerList::on_InfoButton_clicked()
{
    CustomerInfo *window = new CustomerInfo;

    window->show();
}
