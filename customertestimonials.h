#ifndef CUSTOMERTESTIMONIALS_H
#define CUSTOMERTESTIMONIALS_H

#include <QDialog>

namespace Ui {
class CustomerTestimonials;
}

class CustomerTestimonials : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerTestimonials(QWidget *parent = 0);
    ~CustomerTestimonials();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CustomerTestimonials *ui;
    int row;
    int col;
};

#endif // CUSTOMERTESTIMONIALS_H
