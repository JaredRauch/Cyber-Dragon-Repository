#ifndef EDITREMOVEWINDOW_H
#define EDITREMOVEWINDOW_H

#include <QMainWindow>

namespace Ui {
class EditRemoveWindow;
}

class EditRemoveWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditRemoveWindow(QWidget *parent = 0);
    ~EditRemoveWindow();

private:
    Ui::EditRemoveWindow *ui;
};

#endif // EDITREMOVEWINDOW_H
