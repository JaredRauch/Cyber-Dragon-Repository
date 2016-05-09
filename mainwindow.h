#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "customertestimonials.h"
#include "requestpamphlet.h"
#include "orderproduct.h"
#include "database.h"

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


    void on_actionCustomer_Testimonials_triggered();

    void on_actionRequest_Pamphlet_triggered();

    void on_actionOrder_Products_triggered();

    void on_pushButton_clicked();

    void on_pushButton_logout_clicked();

private:
    Ui::MainWindow *ui;
    CustomerTestimonials *customertestimonials;
    RequestPamphlet *requestpamphlet;
    OrderProduct *orderproduct;

    Database *db;


};

#endif // MAINWINDOW_H
