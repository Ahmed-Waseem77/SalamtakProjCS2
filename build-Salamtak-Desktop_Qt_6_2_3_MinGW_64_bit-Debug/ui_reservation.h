/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reservation
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *listWidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Reservation)
    {
        if (Reservation->objectName().isEmpty())
            Reservation->setObjectName(QString::fromUtf8("Reservation"));
        Reservation->resize(800, 600);
        centralwidget = new QWidget(Reservation);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 0, 111, 31));
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(80, 160, 571, 321));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 130, 72, 24));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(160, 130, 72, 24));
        Reservation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Reservation);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Reservation->setMenuBar(menubar);
        statusbar = new QStatusBar(Reservation);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Reservation->setStatusBar(statusbar);

        retranslateUi(Reservation);

        QMetaObject::connectSlotsByName(Reservation);
    } // setupUi

    void retranslateUi(QMainWindow *Reservation)
    {
        Reservation->setWindowTitle(QCoreApplication::translate("Reservation", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Reservation", "Account", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Reservation", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Reservation", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Reservation", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Reservation", "New Item", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Reservation: public Ui_Reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
