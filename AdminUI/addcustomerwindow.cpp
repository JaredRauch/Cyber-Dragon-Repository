#include "addcustomerwindow.h"
#include "ui_addcustomerwindow.h"
#include "QDebug"

AddCustomerWindow::AddCustomerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddCustomerWindow)
{
    ui->setupUi(this);
}

AddCustomerWindow::~AddCustomerWindow()
{
    delete ui;
}

void AddCustomerWindow::on_NameLineEdit_editingFinished()
{
    qDebug() << "Right here!";
    if(ui->NameLineEdit->inputMask() == "" || ui->StreetLineEdit->inputMask() == ""
       || ui->CityLineEdit->inputMask() == "" || ui->ZipLineEdit->inputMask() == "")
    {
        ui->acceptButton->setEnabled(false);
    }
    else
    {
        ui->acceptButton->setEnabled(true);
    }
}

void AddCustomerWindow::on_StreetLineEdit_editingFinished()
{
    if(ui->NameLineEdit->inputMask() == "" || ui->CityLineEdit->inputMask() == "" ||
       ui->ZipLineEdit->inputMask() == "" || ui->StreetLineEdit->inputMask() == "")
    {
        ui->acceptButton->setEnabled(false);
    }
    else
    {
        ui->acceptButton->setEnabled(true);
    }
}

void AddCustomerWindow::on_CityLineEdit_editingFinished()
{
    if(ui->StreetLineEdit->inputMask() == "" || ui->NameLineEdit->inputMask() == "" ||
       ui->ZipLineEdit->inputMask() == "" || ui->CityLineEdit->inputMask() == "")
    {
        ui->acceptButton->setEnabled(false);
    }
    else
    {
        ui->acceptButton->setEnabled(true);
    }
}

void AddCustomerWindow::on_ZipLineEdit_editingFinished()
{
    if(ui->StreetLineEdit->inputMask() == "" || ui->CityLineEdit->inputMask() == "" ||
       ui->NameLineEdit->inputMask() == "" || ui->ZipLineEdit->inputMask() == "")
    {
        ui->acceptButton->setEnabled(false);
    }
    else
    {
        ui->acceptButton->setEnabled(true);
    }
}

void AddCustomerWindow::on_rejectButton_clicked()
{
    hide();
}

void AddCustomerWindow::on_acceptButton_clicked()
{
    hide();
}
