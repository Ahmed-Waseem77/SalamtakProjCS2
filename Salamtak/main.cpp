#include "salamtak.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Salamtak w;
    w.show();
    w.setWindowIcon(QIcon("../Resources/SalLogo.png"));
    return a.exec();
}
