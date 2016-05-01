#include "maintenanceplan.h"
#include "ui_maintenanceplan.h"

MaintenancePlan::MaintenancePlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MaintenancePlan)
{
    ui->setupUi(this);
}

MaintenancePlan::~MaintenancePlan()
{
    delete ui;
}
