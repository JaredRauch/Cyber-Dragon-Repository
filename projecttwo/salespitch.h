#ifndef SALESPITCH_H
#define SALESPITCH_H

#include <QDialog>

namespace Ui {
class SalesPitch;
}

class SalesPitch : public QDialog
{
    Q_OBJECT

public:
    explicit SalesPitch(QWidget *parent = 0);
    ~SalesPitch();

private:
    Ui::SalesPitch *ui;
};

#endif // SALESPITCH_H
