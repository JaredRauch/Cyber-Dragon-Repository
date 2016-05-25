#include "customerpurchase.h"
#include "ui_customerpurchase.h"
#include <QDebug>
#include <QTableWidgetItem>
#include <QTextStream>
#include <QApplication>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QHeaderView>
#include <QMessageBox>
#include <QWidget>

/*!
 *
 * @param customerMap
 * @param parent
 */
customerPurchase::customerPurchase(QMap<QString, Customer>* customerMap, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerPurchase)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(0);
    row = 0;
    col = 0;
}
/*
customerPurchase::customerPurchase(Customer* customer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerPurchase)
{
    this->customer = customer;
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(0);
    row = 0;
    col = 0;
}*/

customerPurchase::~customerPurchase()
{
    delete ui;
}
/*!
 *
 * @param arg1
 */
void customerPurchase::on_comboBox_currentIndexChanged( const QString &arg1)
{
    ui->tableWidget->setRowCount(row+1);
   // QComboBox comboBox;

   // connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(combochanged(int)));

   // QString text = ui->comboBox->GetItemText(this.comboBox.SelectedItem);
    QString text = ui->comboBox->currentText();
/*
    Service service;
        if(text == "Basic Security"){
            service = 0;
        }
        else if(text == "Advanced Security"){
            service = 1;
        }
        else if(text == "Training"){
            service = 2;
        }
        else if(text == "Basic Maintenance"){
            service = 3;
        }
        else if(text == "Yearly Training"){
            service = 4;
        }*/

        //COLLECT PRICE, STARTDATE, and END DATE for the purchase.
    //    customer->addPurchase(service, )

    qDebug() << text;


    QTableWidgetItem* newItem = new QTableWidgetItem(text);
    ui->tableWidget->setItem(row, 0, newItem);


    //QTableWidgetItem* newItem2 = new QTableWidgetItem("text");
    //ui->tableWidget->setItem(row, 1, newItem2);
    row++;

}
