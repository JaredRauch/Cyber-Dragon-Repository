#include "orderproduct.h"
#include "ui_orderproduct.h"

OrderProduct::OrderProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderProduct)
{
    ui->setupUi(this);

}

OrderProduct::~OrderProduct()
{
    delete ui;
}

void OrderProduct::on_comboBox_activated(const QString &arg1)
{

}
