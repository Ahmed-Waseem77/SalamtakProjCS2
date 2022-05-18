#ifndef USERPROFILE_H
#define USERPROFILE_H
#include <QMainWindow>
#include <QString>
namespace Ui {
class UserProfile;
}

class UserProfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserProfile(QWidget *parent = nullptr);
    ~UserProfile();
    bool login();
    void signup();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::UserProfile *ui;
    QString email;
    QString password;
};

#endif // USERPROFILE_H
