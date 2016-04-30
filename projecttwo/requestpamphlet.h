#ifndef REQUESTPAMPHLET_H
#define REQUESTPAMPHLET_H

#include <QDialog>

namespace Ui {
class RequestPamphlet;
}

class RequestPamphlet : public QDialog
{
    Q_OBJECT

public:
    explicit RequestPamphlet(QWidget *parent = 0);
    ~RequestPamphlet();

private:
    Ui::RequestPamphlet *ui;
};

#endif // REQUESTPAMPHLET_H
