#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_validation->setVisible(false);
    ui->pushButton_logout->setVisible(false);

    //Sets font style
    int id = QFontDatabase::addApplicationFont(":/assets/assets/Cyberfall.otf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont cyberfall(family);
    ui->label_title->setFont(cyberfall);
    ui->label_company->setFont(cyberfall);

    //Create DB.
    db = new Database("iCyberSecurity.sqlite");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Basic login for testing with validation
//Idea being once logged in, hide the login box and show account details panel in its place
void MainWindow::on_pushButton_clicked()
{
    QString username;
    QString password;

    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();
    bool success;


   try{
       customer = db->loginAsCustomer(username, password);
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

       customerPurchase *customerUI = new customerPurchase(customer);
       //CustomerList *adminUI = new CustomerList(customerMap);

       customerUI->show();

       //adminUI->show();
   }
   else
   {
       ui->label_validation->setVisible(true);
       ui->pushButton_logout->setVisible(true);
       ui->groupBox->setVisible(false);

   }
}

void MainWindow::on_pushButton_logout_clicked()
{
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    ui->groupBox->setVisible(true);
    ui->pushButton_logout->setVisible(false);

}

void MainWindow::on_pushButton_order_clicked()
{
    orderproduct = new OrderProduct(this);
    orderproduct->show();
}

void MainWindow::on_pushButton_testimonials_clicked()
{
    customertestimonials = new CustomerTestimonials(this);
    customertestimonials->show();
}

void MainWindow::on_pushButton_requestpamplet_clicked()
{
    requestpamphlet = new RequestPamphlet(this);
    requestpamphlet->show();
}

void MainWindow::on_actionAdmin_Login_triggered()
{
    adminlogin = new adminLogin(db, this);
    adminlogin->show();
}

void MainWindow::on_actionProgram_Instructions_triggered()
{
    programinstructions = new ProgramInstructions (this);
    programinstructions->show();
}

void MainWindow::on_actionContact_Information_triggered()
{
    contactus = new ContactUs (this);
    contactus->show();
}
