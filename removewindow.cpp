#include "removewindow.h"
#include "ui_removewindow.h"
/*!
 *
 * @param parent
 */
RemoveWindow::RemoveWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RemoveWindow)
{
    ui->setupUi(this);

    db = new Database("ICyberSecurity.sqlite");
}
/*!
 * brief Destructor
 */
RemoveWindow::~RemoveWindow()
{
    delete ui;
}
/*!
 * brief Conform Box
 */
void RemoveWindow::on_ConformBox_accepted()
{
   // try
   // {
        if(ui->NameLineEdit->text() == "")
        {
            ui->Blank_Label->setText("<font color = 'red'>*Please enter in a name!</font>");
        }
        else
        {
            // Implement check through customer data base.
            hide();

        //    db->DeleteCustomer(ui->NameLineEdit->text());
        }
   // };
   // catch()
   // {
        ErrorWindow *e = new ErrorWindow(3);

        e->show();
   // }

}
/*!
 * brief reject box
 */
void RemoveWindow::on_ConformBox_rejected()
{
    hide();
}

