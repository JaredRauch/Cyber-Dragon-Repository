#include "programinstructions.h"
#include "ui_programinstructions.h"

ProgramInstructions::ProgramInstructions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgramInstructions)
{
    ui->setupUi(this);
}

ProgramInstructions::~ProgramInstructions()
{
    delete ui;
}
