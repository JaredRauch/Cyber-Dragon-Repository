#include "customerlist.h"
#include "ui_customerlist.h"
#include <qDebug>

CustomerList::CustomerList(QMap<QString, Customer>* customerMap, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerList)
{
    int row = 0;

    this->customerMap = customerMap;

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

    QMap<QString, Customer>::iterator it = customerMap->begin();

    bool cont = (it != customerMap->end());
    while(cont){
        QTableWidgetItem* name = new QTableWidgetItem();
        name->setText(it->getName());

        QTableWidgetItem* interest = new QTableWidgetItem();
        switch(it->getInterest()){
        case NOT_INTERESTED : interest->setText("Not Interested");
            break;
        case SOMEWHAT_INTERESTED : interest->setText("Somewhat Interested");
            break;
        case VERY_INTERESTED : interest->setText("Very Interested");
            break;
        }

        QTableWidgetItem* key = new QTableWidgetItem();
        key->setText(it->isKey() ? "Yes" : "No");

        ui->CustomerWidget->insertRow(row);

        ui->CustomerWidget->setItem(row, 0, name);

        ui->CustomerWidget->setItem(row, 1, interest);

        ui->CustomerWidget->setItem(row, 2, key);

        it++;

        if(it != customerMap->end()){
            row++;
            cont = true;
        }
        else
        {
            cont = false;
        }
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
    int hide_annoying_warning;

    ui->CustomerWidget->selectRow(row);

    ui->InfoButton->setEnabled(true);

    ui->RemoveButton->setEnabled(true);

    hide_annoying_warning = column;
}


void CustomerList::on_InfoButton_clicked()
{
    CustomerInfo *window = new CustomerInfo;

    window->show();
}
