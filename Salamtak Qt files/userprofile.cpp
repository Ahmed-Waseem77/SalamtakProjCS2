#include "userprofile.h"
#include "ui_userprofile.h"

UserProfile::UserProfile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserProfile)
{
    ui->setupUi(this);
    ui->editusername->setEnabled(false);
    ui->editpassword->setEnabled(false);
    ui->editconfirmpassword->setEnabled(false);
    ui->editbirthday->setEnabled(false);
    ui->editarea->setEnabled(false);
    ui->editbloodtype->setEnabled(false);
    ui->editdiabetic->setEnabled(false);
    ui->editissues->setEnabled(false);
}

UserProfile::~UserProfile()
{
    delete ui;
}

void UserProfile::on_pushButton_2_clicked()
{
    ui->setupUi(this);
    ui->editusername->setEnabled(true);
    ui->editpassword->setEnabled(true);
    ui->editconfirmpassword->setEnabled(true);
    ui->editbirthday->setEnabled(true);
    ui->editarea->setEnabled(true);
}


void UserProfile::on_pushButton_3_clicked()
{
    ui->setupUi(this);
    ui->editbloodtype->setEnabled(true);
    ui->editdiabetic->setEnabled(true);
    ui->editissues->setEnabled(true);
}
void signup(){
//d
}
bool login(){
//d
}
