/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QLabel *label_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName(QString::fromUtf8("Homepage"));
        Homepage->resize(800, 600);
        Homepage->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget = new QWidget(Homepage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 290, 161, 24));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFlat(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(710, 10, 86, 24));
        QFont font;
        font.setBold(true);
        pushButton_5->setFont(font);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFlat(true);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(620, 520, 80, 24));
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setFlat(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 10, 80, 24));
        pushButton_4->setFont(font);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setFlat(true);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 140, 160, 86));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setFlat(false);

        verticalLayout->addWidget(pushButton_2);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setFlat(false);

        verticalLayout->addWidget(pushButton_9);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 291, 21));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_4->setFont(font1);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 321, 31));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        Homepage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Homepage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Homepage->setMenuBar(menubar);
        statusbar = new QStatusBar(Homepage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Homepage->setStatusBar(statusbar);

        retranslateUi(Homepage);

        pushButton_5->setDefault(false);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QMainWindow *Homepage)
    {
        Homepage->setWindowTitle(QCoreApplication::translate("Homepage", "MainWindow", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Homepage", "View reservations", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Homepage", "Log out", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Homepage", "Contact us", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Homepage", "My Account", nullptr));
        pushButton->setText(QCoreApplication::translate("Homepage", "Reserve room", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Homepage", "Reserve clinic appointment", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Homepage", "Reserve Lab", nullptr));
        label_4->setText(QCoreApplication::translate("Homepage", "Reservations", nullptr));
        label->setText(QCoreApplication::translate("Homepage", "Balance: ", nullptr));
        label_3->setText(QCoreApplication::translate("Homepage", "Last name", nullptr));
        label_2->setText(QCoreApplication::translate("Homepage", "First name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
