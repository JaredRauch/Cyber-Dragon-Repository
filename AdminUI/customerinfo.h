#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include <QMainWindow>

namespace Ui {
class CustomerInfo;
}

class CustomerInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomerInfo(QWidget *parent = 0);
    ~CustomerInfo();

private:
    Ui::CustomerInfo *ui;
};

#endif // CUSTOMERINFO_H
