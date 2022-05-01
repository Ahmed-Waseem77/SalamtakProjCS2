#include "salamtak.h"

#include <QApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString servername = "LOCALHOST\\SQLEXPRESS";
    QString dbname = "HospitalDB";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setConnectOptions();

    Salamtak w;
    w.show();
    w.setWindowIcon(QIcon("../Resources/SalLogo.png"));
    return a.exec();
}
