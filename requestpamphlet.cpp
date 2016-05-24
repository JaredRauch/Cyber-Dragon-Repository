#include "requestpamphlet.h"
#include "ui_requestpamphlet.h"
/*!
 *
 * @param parent
 */
RequestPamphlet::RequestPamphlet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RequestPamphlet)
{
    ui->setupUi(this);
}
/*!
 * brief destructor for Pamphlet button
 */
RequestPamphlet::~RequestPamphlet()
{
    delete ui;
}
/*!
 * brief close push button
 */
void RequestPamphlet::on_pushButton_clicked()
{
    this->close();
}
