#ifndef ERRORWINDOW_H
#define ERRORWINDOW_H

#include <QMainWindow>

namespace Ui {
class ErrorWindow;
}

class ErrorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ErrorWindow(int index, QWidget *parent = 0);
    ~ErrorWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ErrorWindow *ui;

    enum
    {
        AddCustomerError,
        RemoveFromListError,
        Remove_That_Doesnt_Exist
    };
};

#endif // ERRORWINDOW_H
