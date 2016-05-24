#include "programinstructions.h"
#include "ui_programinstructions.h"
/*!
 *
 * @param parent
 */
ProgramInstructions::ProgramInstructions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProgramInstructions)
{
    ui->setupUi(this);
}
/*!
 * brief Destructor
 */
ProgramInstructions::~ProgramInstructions()
{
    delete ui;
}
