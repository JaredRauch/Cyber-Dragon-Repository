#include "customerlist.h"
#include "ui_customerlist.h"
#include <QDebug>
//! A Constructor
/*! This Constructor creates and streaches the columns in the tablewidget and adds
 the customers to the table widget. */
/*!
 * @param customerMap
 * @param parent
 */

CustomerList* CustomerList::global = NULL;
bool CustomerList::instantiated = false;

CustomerList::CustomerList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerList)
{
    ui->setupUi(this);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->RemoveButton->setEnabled(false);
}

/*CustomerList::CustomerList(QMap<QString, Customer>* customerMap, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomerList)
{
    row = 0;
    selectedRow = -1;
    selectedColumn = -1;

    this->customerMap = customerMap;

    ui->setupUi(this);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->RemoveButton->setEnabled(false);

    if(ui->CustomerWidget->rowCount() == 0)
    {
        ui->EditButton->setEnabled(false);
    }
    else
    {
        ui->EditButton->setEnabled(true);
    }

    QMap<QString, Customer>::iterator it = customerMap->begin();

    bool cont = (it != customerMap->end());
    while(cont){
        QTableWidgetItem* name = new QTableWidgetItem();
        name->setText(it->getName());

        QTableWidgetItem* interest = new QTableWidgetItem();
        switch(it->getInterest()){
        case NOT_INTERESTED : interest->setText("Not Interested");
            break;
        case SOMEWHAT_INTERESTED : interest->setText("Somewhat Interested");
            break;
        case VERY_INTERESTED : interest->setText("Very Interested");
            break;
        }

        QTableWidgetItem* key = new QTableWidgetItem();
        key->setText(it->isKey() ? "Yes" : "No");

        ui->CustomerWidget->insertRow(row);

        ui->CustomerWidget->setItem(row, 0, name);

        ui->CustomerWidget->setItem(row, 1, interest);

        ui->CustomerWidget->setItem(row, 2, key);

        it++;

        if(it != customerMap->end()){
            row++;
            cont = true;
        }
        else
        {
            cont = false;
        }
    }
}*/

CustomerList* CustomerList::getInstance(){
    if(!instantiated){
        instantiated = true;
        global = new CustomerList;
    }
    return global;
}

void CustomerList::setDB(Database *db){
    this->db = db;
}

void CustomerList::setUsername(QString username){
    this->username = username;
}

void CustomerList::setPassword(QString password){
    this->password = password;
}

void CustomerList::updateTable(){
    emptyTable();
    populateList();
}

void CustomerList::emptyTable(){
    while(ui->CustomerWidget->rowCount() > 0){
        ui->CustomerWidget->removeRow(0);
    }
}

void CustomerList::populateList(){
    row = 0;

    customerMap = db->loginAsAdmin(username, password);

    QMap<QString, Customer>::iterator it = customerMap->begin();

    bool cont = (it != customerMap->end());
    while(cont){
        QTableWidgetItem* name = new QTableWidgetItem();
        name->setText(it->getName());

        QTableWidgetItem* interest = new QTableWidgetItem();
        switch(it->getInterest()){
        case NOT_INTERESTED : interest->setText("Not Interested");
            break;
        case SOMEWHAT_INTERESTED : interest->setText("Somewhat Interested");
            break;
        case VERY_INTERESTED : interest->setText("Very Interested");
            break;
        }

        QTableWidgetItem* key = new QTableWidgetItem();
        key->setText(it->isKey() ? "Yes" : "No");

        ui->CustomerWidget->insertRow(row);

        ui->CustomerWidget->setItem(row, 0, name);

        ui->CustomerWidget->setItem(row, 1, interest);

        ui->CustomerWidget->setItem(row, 2, key);

        it++;

        if(it != customerMap->end()){
            row++;
            cont = true;
        }
        else
        {
            cont = false;
        }
    }

    if(ui->CustomerWidget->rowCount() == 0)
    {
        ui->EditButton->setEnabled(false);
    }
    else
    {
        ui->EditButton->setEnabled(true);
    }
}






/*void CustomerList::on_CustomerWidget_cellClicked(int row, int column)
{
    int hide_annoying_warning;

    ui->CustomerWidget->selectRow(row);

    ui->InfoButton->setEnabled(true);

    ui->RemoveButton->setEnabled(true);

    hide_annoying_warning = column;
}*/






CustomerList::~CustomerList()
{
    delete ui;
}

//! on_AddButton_clicked
/*!
 * brief Signal that opens the add customer window for the user
 */
void CustomerList::on_AddButton_clicked()
{
    AddCustomerWindow *window = new AddCustomerWindow(db, this);

    window->show();
}

//! on_CustomerWidget_cellclicked
/*!
 *
 * brief Signal that emits after the user clicks an item displayed in the table widget
 *
 * @param row
 * @param column
 */

void CustomerList::on_CustomerWidget_cellClicked(int row, int column)
{
    selectedRow = row;
    selectedColumn = column;
    ui->CustomerWidget->selectRow(row);

    ui->InfoButton->setEnabled(true);

    ui->RemoveButton->setEnabled(true);
}

//! on_InfoButton_clicked()
/*!
 * brief Signal that opens the customer information window for the user once the
info button is clicked
 */
/*void CustomerList::on_InfoButton_clicked()
{
    if(selectedRow >= 0 && selectedColumn >= 0){
        QMap<QString, Customer>::iterator it = customerMap->find(ui->CustomerWidget->item(selectedRow, selectedColumn)->text());
        CustomerInfo* window = new CustomerInfo(it.value());

        window->show();
    }
}*/


void CustomerList::on_InfoButton_clicked()
{
   // CustomerInfo *window = new CustomerInfo;

     //window->show();



    row = 0;

    this->customerMap = customerMap;

    ui->setupUi(this);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);

    ui->RemoveButton->setEnabled(false);

    if(ui->CustomerWidget->rowCount() == 0)
    {
        ui->EditButton->setEnabled(false);
    }
    else
    {
        ui->EditButton->setEnabled(true);
    }

    QMap<QString, Customer>::iterator it = customerMap->begin();

    bool cont = (it != customerMap->end());
    while(cont){
        QTableWidgetItem* name = new QTableWidgetItem();
        name->setText(it->getName());

        QTableWidgetItem* interest = new QTableWidgetItem();
        switch(it->getInterest()){
        case NOT_INTERESTED : interest->setText("Not Interested");
            break;
        case SOMEWHAT_INTERESTED : interest->setText("Somewhat Interested");
            break;
        case VERY_INTERESTED : interest->setText("Very Interested");
            break;
        }

        QTableWidgetItem* key = new QTableWidgetItem();
        key->setText(it->isKey() ? "Yes" : "No");

        ui->CustomerWidget->insertRow(row);

        ui->CustomerWidget->setItem(row, 0, name);

        ui->CustomerWidget->setItem(row, 1, interest);

        ui->CustomerWidget->setItem(row, 2, key);

        it++;

        if(it != customerMap->end()){
            row++;
            cont = true;
        }
        else
        {
            cont = false;
        }
    }
}

void CustomerList::on_refreshButton_clicked()
{
    populateList();
}

//
//    row = 0;
//
//    this->customerMap = customerMap;
//
//    ui->setupUi(this);
//
//    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);
//
//    ui->CustomerWidget->horizontalHeader()->setStretchLastSection(true);
//
//    ui->RemoveButton->setEnabled(false);
//
//    if(ui->CustomerWidget->rowCount() == 0)
//    {
//        ui->EditButton->setEnabled(false);
//    }
//    else
//    {
//        ui->EditButton->setEnabled(true);
//    }
//
//    QMap<QString, Customer>::iterator it = customerMap->begin();
//
//    bool cont = (it != customerMap->end());
//    while(cont){
//        QTableWidgetItem* name = new QTableWidgetItem();
//        name->setText(it->getName());
//
//        QTableWidgetItem* interest = new QTableWidgetItem();
//        switch(it->getInterest()){
//        case NOT_INTERESTED : interest->setText("Not Interested");
//            break;
//        case SOMEWHAT_INTERESTED : interest->setText("Somewhat Interested");
//            break;
//        case VERY_INTERESTED : interest->setText("Very Interested");
//            break;
//        }
//
//        QTableWidgetItem* key = new QTableWidgetItem();
//        key->setText(it->isKey() ? "Yes" : "No");
//
//        ui->CustomerWidget->insertRow(row);
//
//        ui->CustomerWidget->setItem(row, 0, name);
//
//        ui->CustomerWidget->setItem(row, 1, interest);
//
//        ui->CustomerWidget->setItem(row, 2, key);
//
//        it++;
//
//        if(it != customerMap->end()){
//            row++;
//            cont = true;
//        }
//        else
//        {
//            cont = false;
//        }
//    }

