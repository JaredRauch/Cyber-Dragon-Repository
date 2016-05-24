#include "addcustomerwindow.h"
#include "errorwindow.h"
#include "ui_addcustomerwindow.h"
#include "customerlist.h"
#include "QDebug"

AddCustomerWindow::AddCustomerWindow(Database* db, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddCustomerWindow)
{
    ui->setupUi(this);
    this->db = db;
}

AddCustomerWindow::~AddCustomerWindow()
{
    delete ui;

    delete db;
}

void AddCustomerWindow::on_rejectButton_clicked()
{
    hide();
}

void AddCustomerWindow::on_acceptButton_clicked()
{
    //try{

        Interest inter;

        bool isKey;

        if((ui->NameLineEdit->text() == "") ||
                (ui->CityLineEdit->text() == "") ||
                (ui->StreetLineEdit->text() == "") ||
                (ui->ZipLineEdit->text() == "") ||
                (ui->not_interested_radio->checkState() == Qt::Unchecked
                 && ui->some_interested_radio->checkState() == Qt::Unchecked &&
                 ui->very_interested_radio->checkState() == Qt::Unchecked))

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

            if(ui->not_interested_radio->checkState() == Qt::Unchecked
                && ui->some_interested_radio->checkState() == Qt::Unchecked &&
                ui->very_interested_radio->checkState() == Qt::Unchecked)
            {
                ui->check_label->setText("<font color = 'red'>*Please check one of the interest boxes!"
                                         "</font>");
            }

        }
        else
        {
            hide();

            if(ui->not_interested_radio->checkState() == Qt::Checked)
            {
                inter = NOT_INTERESTED;
            }
            else if(ui->some_interested_radio->checkState() == Qt::Checked)
            {
                inter = SOMEWHAT_INTERESTED;
            }
            else if(ui->very_interested_radio->checkState() == Qt::Checked)
            {
                inter = VERY_INTERESTED;
            }

            if(ui->IsKey_CheckBox->checkState() == Qt::Unchecked)
            {
                isKey = false;
            }
            else
            {
                isKey = true;
            }



            db->AddCustomer(ui->NameLineEdit->text(), ui->StreetLineEdit->text(),
                            ui->CityLineEdit->text(), ui->statecomboBox->currentText(),
                            ui->ZipLineEdit->text(), inter, isKey);

        }

        CustomerList::getInstance()->updateTable();
    /*};
    catch()
    {

    }*/
}

void AddCustomerWindow::on_not_interested_radio_clicked()
{

    ui->some_interested_radio->setCheckState(Qt::Unchecked);

    ui->very_interested_radio->setCheckState(Qt::Unchecked);
}

void AddCustomerWindow::on_some_interested_radio_clicked()
{
    ui->not_interested_radio->setCheckState(Qt::Unchecked);

    ui->very_interested_radio->setCheckState(Qt::Unchecked);
}

void AddCustomerWindow::on_very_interested_radio_clicked()
{
    ui->not_interested_radio->setCheckState(Qt::Unchecked);

    ui->some_interested_radio->setCheckState(Qt::Unchecked);
}


