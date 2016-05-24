#include "customertestimonials.h"
#include "ui_customertestimonials.h"
/*!
 *
 * @param parent
 */
CustomerTestimonials::CustomerTestimonials(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerTestimonials)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(0);
    row = 0;
    col = 0;
}

CustomerTestimonials::~CustomerTestimonials()
{
    delete ui;
}
/*!
 * brief Testimonials
 */
void CustomerTestimonials::on_pushButton_clicked()
{

    ui->tableWidget->setRowCount(row+1);

    QString name=ui->lineEdit->text();
    QString testimonial =ui->textEdit->toPlainText();

    QTableWidgetItem* newName = new QTableWidgetItem(name);
    QTableWidgetItem* newTest = new QTableWidgetItem(testimonial);

    ui->tableWidget->setItem(row, 0, newName);
    ui->tableWidget->setItem(row, 1, newTest);
    row++;

}
