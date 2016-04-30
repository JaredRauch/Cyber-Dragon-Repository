#ifndef SERVICEOPTIONS_H
#define SERVICEOPTIONS_H

#include <QDialog>

namespace Ui {
class ServiceOptions;
}

class ServiceOptions : public QDialog
{
    Q_OBJECT

public:
    explicit ServiceOptions(QWidget *parent = 0);
    ~ServiceOptions();

private:
    Ui::ServiceOptions *ui;
};

#endif // SERVICEOPTIONS_H
