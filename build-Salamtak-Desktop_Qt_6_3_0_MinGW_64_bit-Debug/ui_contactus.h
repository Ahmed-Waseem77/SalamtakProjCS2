/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactUs
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ContactUs)
    {
        if (ContactUs->objectName().isEmpty())
            ContactUs->setObjectName(QString::fromUtf8("ContactUs"));
        ContactUs->resize(800, 600);
        centralwidget = new QWidget(ContactUs);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 170, 241, 181));
        ContactUs->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ContactUs);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ContactUs->setMenuBar(menubar);
        statusbar = new QStatusBar(ContactUs);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ContactUs->setStatusBar(statusbar);

        retranslateUi(ContactUs);

        QMetaObject::connectSlotsByName(ContactUs);
    } // setupUi

    void retranslateUi(QMainWindow *ContactUs)
    {
        ContactUs->setWindowTitle(QCoreApplication::translate("ContactUs", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ContactUs", "Salamtak@gmail.com\n"
"012345678911", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactUs: public Ui_ContactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
