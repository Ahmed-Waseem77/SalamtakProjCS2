#include "payment.h"
#include "ui_payment.h"

Payment::Payment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);

}

Payment::~Payment()
{
    delete ui;
}



void Payment::on_PayButton_clicked()
{
    //display dynamic window with invoice
}

