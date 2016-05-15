#include "requestpamphlet.h"
#include "ui_requestpamphlet.h"

RequestPamphlet::RequestPamphlet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RequestPamphlet)
{
    ui->setupUi(this);
}

RequestPamphlet::~RequestPamphlet()
{
    delete ui;
}

void RequestPamphlet::on_pushButton_clicked()
{
    this->close();
}
