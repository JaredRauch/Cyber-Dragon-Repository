#include "orderproduct.h"
#include "ui_orderproduct.h"
/*!
 *
 * @param parent
 */
OrderProduct::OrderProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderProduct)
{
    ui->setupUi(this);
}
/*!
 * Destructor
 */
OrderProduct::~OrderProduct()
{
    delete ui;
}
/*!
 * close push button
 */
void OrderProduct::on_pushButton_clicked()
{
    this->close();
}

