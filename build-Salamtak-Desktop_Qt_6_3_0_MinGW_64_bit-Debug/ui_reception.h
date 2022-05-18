/********************************************************************************
** Form generated from reading UI file 'reception.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEPTION_H
#define UI_RECEPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reception
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Reception)
    {
        if (Reception->objectName().isEmpty())
            Reception->setObjectName(QString::fromUtf8("Reception"));
        Reception->resize(814, 580);
        centralwidget = new QWidget(Reception);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 822, 44));
        widget->setStyleSheet(QString::fromUtf8("QWidget {background-color:rgb(66, 57, 57); color:rgb(255, 255, 255);\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setBold(false);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font1;
        font1.setBold(true);
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 0, 8, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 7, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 5, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(50, 180, 331, 151));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 470, 301, 29));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 180, 201, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(620, 180, 113, 28));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(430, 300, 101, 28));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(620, 300, 113, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 300, 71, 20));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(430, 380, 301, 81));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 299, 79));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 71, 20));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 260, 141, 29));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(430, 340, 141, 29));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(620, 220, 113, 28));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(540, 220, 71, 20));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(430, 220, 101, 28));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 150, 151, 20));
        Reception->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Reception);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 814, 25));
        Reception->setMenuBar(menubar);
        statusbar = new QStatusBar(Reception);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Reception->setStatusBar(statusbar);

        retranslateUi(Reception);

        pushButton_5->setDefault(false);


        QMetaObject::connectSlotsByName(Reception);
    } // setupUi

    void retranslateUi(QMainWindow *Reception)
    {
        Reception->setWindowTitle(QCoreApplication::translate("Reception", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("Reception", "Last name", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Reception", "Log out", nullptr));
        label_4->setText(QCoreApplication::translate("Reception", "First name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Reception", "Homepage", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Reception", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Reception", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Reception", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Reception", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Reception", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Reception", "New Row", nullptr));
        pushButton->setText(QCoreApplication::translate("Reception", "Approve room and Medicine", nullptr));
        label->setText(QCoreApplication::translate("Reception", "Number of tentative nights:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Reception", "Panadol", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Reception", "Adol", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Reception", "Brufen", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Reception", "Streplis", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Reception", "Zetrec", nullptr));

        label_2->setText(QCoreApplication::translate("Reception", "Amount:", nullptr));
        label_5->setText(QCoreApplication::translate("Reception", "Medicine", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Reception", "Add Medicine", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Reception", "Delete Medicine", nullptr));
        label_6->setText(QCoreApplication::translate("Reception", "Amount:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Reception", "Panadol", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Reception", "Adol", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Reception", "Brufen", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Reception", "Streplis", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Reception", "Zetrec", nullptr));

        label_7->setText(QCoreApplication::translate("Reception", "Assigned Patients:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reception: public Ui_Reception {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEPTION_H
