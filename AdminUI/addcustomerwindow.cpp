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

void AddCustomerWindow::on_rejectButton_clicked()
{
    hide();
}

void AddCustomerWindow::on_acceptButton_clicked()
{
    if((ui->NameLineEdit->text() == "") ||
       (ui->CityLineEdit->text() == "") ||
       (ui->StreetLineEdit->text() == "") ||
       (ui->ZipLineEdit->text() == ""))
    {
        ErrorWindow *error = new ErrorWindow(0);

        error->show();

        if(ui->NameLineEdit->text() == "")
        {
            ui->Customer_Label->setText("<font color = 'red'>*Customer Entity Name:</font>");
        }

        if(ui->StreetLineEdit->text() == "")
        {
            ui->Street_Label->setText("<font color = 'red'>*Street Address:</font>");
        }

        if(ui->CityLineEdit->text() == "")
        {
            ui->City_Label->setText("<font color = 'red'>*City:</font>");
        }
        if(ui->ZipLineEdit->text() == "")
        {
            ui->Zip_Label->setText("<font color = 'red'>*Zip:</font>");
        }
    }
    else
    {
        hide();
    }
}
