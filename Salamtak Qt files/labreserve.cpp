#include "labreserve.h"
#include "ui_labreserve.h"

LabReserve::LabReserve(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LabReserve)
{
    ui->setupUi(this);
}

LabReserve::~LabReserve()
{
    delete ui;
}

void LabReserve::on_comboBox_3_activated(int index)
{

}

