#include "conceptofoperations.h"
#include "ui_conceptofoperations.h"

ConceptOfOperations::ConceptOfOperations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConceptOfOperations)
{
    ui->setupUi(this);
}

ConceptOfOperations::~ConceptOfOperations()
{
    delete ui;
}
