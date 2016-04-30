#include "salespitch.h"
#include "ui_salespitch.h"

SalesPitch::SalesPitch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SalesPitch)
{
    ui->setupUi(this);
}

SalesPitch::~SalesPitch()
{
    delete ui;
}
