#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "customertestimonials.h"
#include "requestpamphlet.h"
#include "orderproduct.h"
#include "Database.h"
#include "customerlist.h"
#include "adminlogin.h"
#include "programinstructions.h"
#include "contactus.h"
#include "customerpurchase.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_order_clicked();

    void on_pushButton_testimonials_clicked();

    void on_pushButton_requestpamplet_clicked();

    void on_actionAdmin_Login_triggered();

    void on_actionProgram_Instructions_triggered();

    void on_actionContact_Information_triggered();

private:
    Ui::MainWindow *ui;
    CustomerTestimonials *customertestimonials;
    RequestPamphlet *requestpamphlet;
    OrderProduct *orderproduct;

    Database* db;
    QMap<QString, Customer>* customerMap;
    QSet<Testimonial>* set;
    Customer* customer;
    adminLogin* adminlogin;
    ProgramInstructions *programinstructions;
    ContactUs *contactus;
    //customerPurchase *customerpurchase;
};

#endif // MAINWINDOW_H
