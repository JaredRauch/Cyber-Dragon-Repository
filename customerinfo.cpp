#include "customerinfo.h"
#include "ui_customerinfo.h"

CustomerInfo::CustomerInfo(Customer& customer, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerInfo)
{
    ui->setupUi(this);

    ui->nameLabel->setText(customer.getName());
    ui->addressLabel->setText(customer.getAddress());

    switch(customer.getInterest()){
        case NOT_INTERESTED : ui->interestLabel->setText("Not Interested"); break;
        case SOMEWHAT_INTERESTED : ui->interestLabel->setText("Somewhat Interested"); break;
        case VERY_INTERESTED : ui->interestLabel->setText("Very Interested"); break;
    }

    if(customer.isKey()){
        ui->isKeyLabel->setText("Is Key");
    }
    else{
        ui->isKeyLabel->setText("Is Not Key");
    }

   // ui->purchases->horizontalHeader()->setStretchLastSection(true);
    //ui->purchases->horizontalHeader()->setStretchLastSection(true);
    list<Purchase>* purchaseList = customer.getPurchases();
    list<Purchase>::iterator it = purchaseList->begin();
    while(it != purchaseList->end()){
        //Add purchases to the table.
        it++;
    }

    delete purchaseList;
}

CustomerInfo::~CustomerInfo()
{
    delete ui;
}
