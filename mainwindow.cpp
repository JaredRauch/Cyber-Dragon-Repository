#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_validation->setVisible(false);
    ui->pushButton_logout->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSales_Pitch_triggered()
{
    salespitch = new SalesPitch(this);
    salespitch->show();
}

void MainWindow::on_actionConcept_of_operations_triggered()
{
    conceptofoperations = new ConceptOfOperations(this);
    conceptofoperations->show();
}

void MainWindow::on_actionService_options_triggered()
{
    serviceoptions = new ServiceOptions(this);
    serviceoptions->show();
}

void MainWindow::on_actionMaintenance_plan_triggered()
{
    maintenanceplan = new MaintenancePlan(this);
    maintenanceplan->show();
}

void MainWindow::on_actionGuarantee_Policy_triggered()
{
    guarantee = new Guarantee(this);
    guarantee->show();
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
