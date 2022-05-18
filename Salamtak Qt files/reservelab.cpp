#include "reservelab.h"
#include "ui_reservelab.h"

ReserveLab::ReserveLab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReserveLab)
{
    ui->setupUi(this);
}

ReserveLab::~ReserveLab()
{
    delete ui;
}
