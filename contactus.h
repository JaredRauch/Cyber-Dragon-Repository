#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QDialog>
/*!
 * -brief Contact Us Class
 */
namespace Ui {
class ContactUs;
}
/*!
 * \brief The ContactUs class
 */
class ContactUs : public QDialog
{
    Q_OBJECT

public:
    explicit ContactUs(QWidget *parent = 0);
    ~ContactUs();

private:
    Ui::ContactUs *ui;
};

#endif // CONTACTUS_H
