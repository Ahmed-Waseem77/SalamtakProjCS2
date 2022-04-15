#include "salamtak.h"
#include "ui_salamtak.h"

Salamtak::Salamtak(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Salamtak)
{
    ui->setupUi(this);
}

Salamtak::~Salamtak()
{
    delete ui;
}

