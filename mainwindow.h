#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "salespitch.h"
#include "conceptofoperations.h"
#include "serviceoptions.h"
#include "maintenanceplan.h"
#include "guarantee.h"
#include "customertestimonials.h"
#include "requestpamphlet.h"
#include "orderproduct.h"

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
    void on_actionSales_Pitch_triggered();

    void on_actionConcept_of_operations_triggered();

    void on_actionService_options_triggered();

    void on_actionMaintenance_plan_triggered();

    void on_actionGuarantee_Policy_triggered();

    void on_actionCustomer_Testimonials_triggered();

    void on_actionRequest_Pamphlet_triggered();

    void on_actionOrder_Products_triggered();

    void on_pushButton_clicked();

    void on_pushButton_logout_clicked();

private:
    Ui::MainWindow *ui;
    SalesPitch *salespitch;
    ConceptOfOperations *conceptofoperations;
    ServiceOptions *serviceoptions;
    MaintenancePlan *maintenanceplan;
    Guarantee *guarantee;
    CustomerTestimonials *customertestimonials;
    RequestPamphlet *requestpamphlet;
    OrderProduct *orderproduct;
};

#endif // MAINWINDOW_H
