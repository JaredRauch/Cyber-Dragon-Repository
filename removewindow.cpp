#include "removewindow.h"
#include "ui_removewindow.h"

RemoveWindow::RemoveWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RemoveWindow)
{
    ui->setupUi(this);

    db = new Database("ICyberSecurity.sqlite");
}

RemoveWindow::~RemoveWindow()
{
    delete ui;
}

void RemoveWindow::on_ConformBox_accepted()
{
    try
    {
        if(ui->NameLineEdit->text() == "")
        {
            ui->Blank_Label->setText("<font color = 'red'>*Please enter in a name!</font>");
        }
        else
        {
            // Implement check through customer data base.
            hide();

            db->DeleteCustomer(ui->NameLineEdit->text());
        }
    };
    catch()
    {
        ErrorWindow *e = new ErrorWindow(3);

        e->show();
    }

}

void RemoveWindow::on_ConformBox_rejected()
{
    hide();
}
