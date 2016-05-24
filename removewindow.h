#ifndef REMOVEWINDOW_H
#define REMOVEWINDOW_H

#include <QMainWindow>
#include "Database.h"
#include "errorwindow.h"
/*!
 * brief Remove Window Class in UI namespace
 */
namespace Ui {
class RemoveWindow;
}
/*!
 * brief Remove Window Object Constructor
 */
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

    Database *db;
};

#endif // REMOVEWINDOW_H
