#include "adminlogin.h"
#include "ui_adminlogin.h"

adminLogin::adminLogin(Database *db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
    ui->label_validation->setVisible(false);
    ui->pushButton_logout->setVisible(false);
    this->db = db;

}

adminLogin::~adminLogin()
{
    delete ui;
}


//Basic login for testing with validation
//Idea being once logged in, hide the login box and show account details panel in its place

void adminLogin::on_pushButton_clicked()
{
    QString username;
    QString password;

    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();
    bool success;


   try{
       customerMap = db->loginAsAdmin(username, password);
       success = true;
       //Launch customerList.cpp
   }
   catch(InvalidLoginException ile){
       //Tell them their login failed.
        success = false;
   }

   if(success)
   {
       ui->label_validation->setVisible(false);

       CustomerList *adminUI = new CustomerList(customerMap);

       adminUI->show();
   }
   else
   {
       ui->label_validation->setVisible(true);
       ui->pushButton_logout->setVisible(true);
       ui->groupBox->setVisible(false);
   }
}
