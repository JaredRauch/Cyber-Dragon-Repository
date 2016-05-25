#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>
#include <QDebug>

/// Main window construction with formatting, font settings, basic layout established.
/*!
 * Creates database, sets fonts, creates basic layout.
 */
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

/// Customer login
/*!
 * Login activated. Sends password to customer db, opens customer window of
 * login success, else indicates failure if login fails.
 */
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

       customerPurchase *customerUI = new customerPurchase(customerMap);
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
/*!
 * Logout activated.
 */
void MainWindow::on_pushButton_logout_clicked()
{
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    ui->groupBox->setVisible(true);
    ui->pushButton_logout->setVisible(false);

}
/*!
 * Order product window opened.
 */
void MainWindow::on_pushButton_order_clicked()
{
    orderproduct = new OrderProduct(this);
    orderproduct->show();
}
/*!
 * Testimonials window opened.
 */
void MainWindow::on_pushButton_testimonials_clicked()
{
    customertestimonials = new CustomerTestimonials(this);
    customertestimonials->show();
}
/*!
 * Request pamphlet opened.
 */
void MainWindow::on_pushButton_requestpamplet_clicked()
{
    requestpamphlet = new RequestPamphlet(this);
    requestpamphlet->show();
}
/*!
 * Admin login window opened.
 */
void MainWindow::on_actionAdmin_Login_triggered()
{
    adminlogin = new adminLogin(db, this);
    adminlogin->show();
}
/*!
 * Program instructions window opened.
 */
void MainWindow::on_actionProgram_Instructions_triggered()
{
    programinstructions = new ProgramInstructions (this);
    programinstructions->show();
}
/*!
 * Contact Us window opened.
 */
void MainWindow::on_actionContact_Information_triggered()
{
    contactus = new ContactUs (this);
    contactus->show();
}
