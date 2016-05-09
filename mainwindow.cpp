#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_validation->setVisible(false);
    ui->pushButton_logout->setVisible(false);


    Database* db = new Database("iCyberSecurity.sqlite");
    QMap<QString, Customer>* map;
    QSet<Testimonial>* set;
    db->loginAsAdmin("admin", "pass", map, set);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCustomer_Testimonials_triggered()
{
    customertestimonials = new CustomerTestimonials(this);
    customertestimonials->show();
}

void MainWindow::on_actionRequest_Pamphlet_triggered()
{
    requestpamphlet = new RequestPamphlet(this);
    requestpamphlet->show();
}

void MainWindow::on_actionOrder_Products_triggered()
{
    orderproduct = new OrderProduct(this);
    orderproduct->show();
}


//Basic login for testing with validation
//Idea being once logged in, hide the login box and show account details panel in its place
void MainWindow::on_pushButton_clicked()
{
    //Customer customer();
    //Testimonial testimonial();

    //Customer * ptrCustomer = &customer;
    //Testimonial * ptrTestimonial = &testimonial;

    Customer* customer;
    Testimonial* testimonial;


    QString username;
    QString password;

    QString testUser = "admin";
    QString testPass = "12345";

   username = ui->lineEdit_username->text();
   password = ui->lineEdit_password->text();






   if(username != testUser || password != testPass)
   {
       ui->label_validation->setVisible(true);
   }
   else
   {
       ui->label_validation->setVisible(false);
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
