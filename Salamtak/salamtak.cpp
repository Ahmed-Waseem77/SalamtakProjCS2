#include "salamtak.h"
#include "ui_salamtak.h"




Salamtak::Salamtak(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Salamtak)
{

    ui->setupUi(this);
    ui->ErrorPass->setStyleSheet("QLabel{ color: red;}");
    ui->ErrorUser->setStyleSheet("QLabel{ color: red;}");
    ui->EmergencyButton->setStyleSheet(("QPushButton {color: white; border: 0.4px solid #8f8f91;border-radius: 6px;background-color: #ff0000 ;min-width: 80px;}"));
}

Salamtak::~Salamtak()
{
    delete ui;
}


void Salamtak::on_LoginButton_clicked()
{
    hide();
    Homepage* r = new Homepage();
    r->show();


}


void Salamtak::on_RegisterButton_clicked()
{

    hide();
    Registeration* r = new Registeration();
    r->show();


}

