#ifndef SALAMTAK_H
#define SALAMTAK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Salamtak; }
QT_END_NAMESPACE

class Salamtak : public QMainWindow
{
    Q_OBJECT

public:
    Salamtak(QWidget *parent = nullptr);
    ~Salamtak();

private:
    Ui::Salamtak *ui;
};
#endif // SALAMTAK_H
