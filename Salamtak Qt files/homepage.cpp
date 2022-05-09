#include "homepage.h"
#include "ui_homepage.h"
#include "reservation.h"
#include "registeration.h"

Homepage::Homepage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}

void Homepage::on_ReserveRoomButton_clicked()
{
    hide();
    Reservation* r = new Reservation();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();

}


void Homepage::on_pushButton_clicked()
{
    hide();
    Payment* r = new Payment();
    r->setWindowIcon(QIcon("../Resources/SalLogo.png"));
    r->show();
}

