#include "serviceoptions.h"
#include "ui_serviceoptions.h"

ServiceOptions::ServiceOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServiceOptions)
{
    ui->setupUi(this);
}

ServiceOptions::~ServiceOptions()
{
    delete ui;
}
