#include "customerlist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CustomerList w;
    w.show();

    return a.exec();
}
