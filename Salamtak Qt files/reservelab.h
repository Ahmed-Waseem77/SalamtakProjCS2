#ifndef RESERVELAB_H
#define RESERVELAB_H

#include <QMainWindow>

namespace Ui {
class ReserveLab;
}

class ReserveLab : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReserveLab(QWidget *parent = nullptr);
    ~ReserveLab();

private:
    Ui::ReserveLab *ui;
};

#endif // RESERVELAB_H
