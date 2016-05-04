#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <QMainWindow>
#include "addcustomerwindow.h"
#include "customerinfo.h"

namespace Ui {
class CustomerList;
}

class CustomerList : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerList(QWidget *parent = 0);
    ~CustomerList();

private slots:
    void on_AddButton_clicked();

    void on_CustomerWidget_cellClicked(int row, int column);

    void on_InfoButton_clicked();

private:
    Ui::CustomerList *ui;

    int requests;
};

#endif // CUSTOMERLIST_H
