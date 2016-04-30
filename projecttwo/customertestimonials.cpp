#include "customertestimonials.h"
#include "ui_customertestimonials.h"

CustomerTestimonials::CustomerTestimonials(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerTestimonials)
{
    ui->setupUi(this);
}

CustomerTestimonials::~CustomerTestimonials()
{
    delete ui;
}
