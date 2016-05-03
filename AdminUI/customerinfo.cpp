#include "customerinfo.h"
#include "ui_customerinfo.h"

CustomerInfo::CustomerInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerInfo)
{
    ui->setupUi(this);
}

CustomerInfo::~CustomerInfo()
{
    delete ui;
}
