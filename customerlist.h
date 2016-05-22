#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include <QMainWindow>
#include <iterator>
#include <QObject>
#include "addcustomerwindow.h"
#include "customerinfo.h"
#include "Database.h"

namespace Ui {
class CustomerList;
}

class CustomerList : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerList(QMap<QString, Customer>* customerMap, QWidget *parent = 0);
    ~CustomerList();

public slots:

//    void AddCustomer(QString name, QString street, QString city, QString Zipcode);

private slots:
    void on_AddButton_clicked();

    void on_CustomerWidget_cellClicked(int row, int column);

    void on_InfoButton_clicked();

private:
    Ui::CustomerList *ui;

    QMap<QString, Customer>* customerMap;

    int row;
    int selectedRow;
    int selectedColumn;
};

#endif // CUSTOMERLIST_H
