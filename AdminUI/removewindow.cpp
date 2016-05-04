#include "removewindow.h"
#include "ui_removewindow.h"

RemoveWindow::RemoveWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RemoveWindow)
{
    ui->setupUi(this);
}

RemoveWindow::~RemoveWindow()
{
    delete ui;
}

void RemoveWindow::on_ConformBox_accepted()
{
    hide(); // For now...
}

void RemoveWindow::on_ConformBox_rejected()
{
    hide();
}
