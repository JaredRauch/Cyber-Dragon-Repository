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

customerPurchase::customerPurchase(QMap<QString, Customer>* customerMap, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerPurchase)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(0);
    row = 0;
    col = 0;
}

customerPurchase::~customerPurchase()
{
    delete ui;
}

void customerPurchase::on_comboBox_currentIndexChanged( const QString &arg1)
{
    ui->tableWidget->setRowCount(row+1);
   // QComboBox comboBox;

   // connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(combochanged(int)));

   // QString text = ui->comboBox->GetItemText(this.comboBox.SelectedItem);
    QString text = ui->comboBox->currentText();

    qDebug() << text;


    QTableWidgetItem* newItem = new QTableWidgetItem(text);
    ui->tableWidget->setItem(row, 0, newItem);


    //QTableWidgetItem* newItem2 = new QTableWidgetItem("text");
    //ui->tableWidget->setItem(row, 1, newItem2);
    row++;

}
