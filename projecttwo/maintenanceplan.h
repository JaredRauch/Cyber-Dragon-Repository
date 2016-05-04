#ifndef MAINTENANCEPLAN_H
#define MAINTENANCEPLAN_H

#include <QDialog>

namespace Ui {
class MaintenancePlan;
}

class MaintenancePlan : public QDialog
{
    Q_OBJECT

public:
    explicit MaintenancePlan(QWidget *parent = 0);
    ~MaintenancePlan();

private:
    Ui::MaintenancePlan *ui;
};

#endif // MAINTENANCEPLAN_H
