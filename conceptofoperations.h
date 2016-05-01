#ifndef CONCEPTOFOPERATIONS_H
#define CONCEPTOFOPERATIONS_H

#include <QDialog>

namespace Ui {
class ConceptOfOperations;
}

class ConceptOfOperations : public QDialog
{
    Q_OBJECT

public:
    explicit ConceptOfOperations(QWidget *parent = 0);
    ~ConceptOfOperations();

private:
    Ui::ConceptOfOperations *ui;
};

#endif // CONCEPTOFOPERATIONS_H
