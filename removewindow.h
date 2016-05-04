#ifndef REMOVEWINDOW_H
#define REMOVEWINDOW_H

#include <QMainWindow>

namespace Ui {
class RemoveWindow;
}

class RemoveWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RemoveWindow(QWidget *parent = 0);
    ~RemoveWindow();

private slots:
    void on_ConformBox_accepted();

    void on_ConformBox_rejected();

private:
    Ui::RemoveWindow *ui;
};

#endif // REMOVEWINDOW_H
