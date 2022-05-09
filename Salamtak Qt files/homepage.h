#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

namespace Ui {
class Homepage;
}

class Homepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();

private slots:
    void on_ReserveRoomButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Homepage *ui;
};

#endif // HOMEPAGE_H
