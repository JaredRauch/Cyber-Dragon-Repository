#ifndef PROGRAMINSTRUCTIONS_H
#define PROGRAMINSTRUCTIONS_H

#include <QDialog>

namespace Ui {
/*!
 * brief Program Instructions
 */
class ProgramInstructions;
}
/*!
 * \brief The ProgramInstructions class
 */
class ProgramInstructions : public QDialog
{
    Q_OBJECT

public:
    explicit ProgramInstructions(QWidget *parent = 0);
    ~ProgramInstructions();

private:
    Ui::ProgramInstructions *ui;
};

#endif // PROGRAMINSTRUCTIONS_H
