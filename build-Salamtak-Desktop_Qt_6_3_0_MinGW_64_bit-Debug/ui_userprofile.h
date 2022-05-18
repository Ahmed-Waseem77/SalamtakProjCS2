/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QWidget *centralwidget;
    QWidget *widget_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QComboBox *editdiabetic;
    QLabel *label_10;
    QLabel *label;
    QComboBox *editbloodtype;
    QLineEdit *editissues;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_15;
    QWidget *gridLayoutWidget;
    QGridLayout *editlayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QLineEdit *editarea;
    QLabel *label_26;
    QLineEdit *editpassword;
    QCalendarWidget *editbirthday;
    QPushButton *pushButton_2;
    QLabel *label_25;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *editemail;
    QLineEdit *editconfirmpassword;
    QLabel *label_23;
    QLineEdit *editusername;
    QLabel *label_24;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_20;
    QLabel *label_21;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_7;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName(QString::fromUtf8("UserProfile"));
        UserProfile->resize(1163, 750);
        centralwidget = new QWidget(UserProfile);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(710, 320, 491, 171));
        gridLayoutWidget_2 = new QWidget(widget_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 261, 136));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(gridLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        editdiabetic = new QComboBox(gridLayoutWidget_2);
        editdiabetic->addItem(QString());
        editdiabetic->addItem(QString());
        editdiabetic->addItem(QString());
        editdiabetic->setObjectName(QString::fromUtf8("editdiabetic"));

        gridLayout_2->addWidget(editdiabetic, 1, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        editbloodtype = new QComboBox(gridLayoutWidget_2);
        editbloodtype->setObjectName(QString::fromUtf8("editbloodtype"));

        gridLayout_2->addWidget(editbloodtype, 0, 1, 1, 1);

        editissues = new QLineEdit(gridLayoutWidget_2);
        editissues->setObjectName(QString::fromUtf8("editissues"));

        gridLayout_2->addWidget(editissues, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 3, 1, 1, 1);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 0, 141, 16));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 699, 604));
        editlayout = new QGridLayout(gridLayoutWidget);
        editlayout->setObjectName(QString::fromUtf8("editlayout"));
        editlayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        editlayout->addWidget(label_4, 2, 0, 1, 2);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        editlayout->addWidget(label_3, 1, 0, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        editlayout->addWidget(label_5, 3, 0, 1, 2);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        editlayout->addWidget(pushButton, 8, 3, 1, 1);

        editarea = new QLineEdit(gridLayoutWidget);
        editarea->setObjectName(QString::fromUtf8("editarea"));

        editlayout->addWidget(editarea, 6, 2, 1, 1);

        label_26 = new QLabel(gridLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        editlayout->addWidget(label_26, 3, 3, 1, 1);

        editpassword = new QLineEdit(gridLayoutWidget);
        editpassword->setObjectName(QString::fromUtf8("editpassword"));

        editlayout->addWidget(editpassword, 2, 2, 1, 1);

        editbirthday = new QCalendarWidget(gridLayoutWidget);
        editbirthday->setObjectName(QString::fromUtf8("editbirthday"));

        editlayout->addWidget(editbirthday, 4, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        editlayout->addWidget(pushButton_2, 8, 0, 1, 3);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        editlayout->addWidget(label_25, 2, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        editlayout->addWidget(label_2, 0, 0, 1, 2);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        editlayout->addWidget(label_9, 6, 1, 1, 1);

        editemail = new QLineEdit(gridLayoutWidget);
        editemail->setObjectName(QString::fromUtf8("editemail"));

        editlayout->addWidget(editemail, 1, 2, 1, 1);

        editconfirmpassword = new QLineEdit(gridLayoutWidget);
        editconfirmpassword->setObjectName(QString::fromUtf8("editconfirmpassword"));

        editlayout->addWidget(editconfirmpassword, 3, 2, 1, 1);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        editlayout->addWidget(label_23, 0, 3, 1, 1);

        editusername = new QLineEdit(gridLayoutWidget);
        editusername->setObjectName(QString::fromUtf8("editusername"));

        editlayout->addWidget(editusername, 0, 2, 1, 1);

        label_24 = new QLabel(gridLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        editlayout->addWidget(label_24, 1, 3, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        editlayout->addWidget(label_7, 6, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        editlayout->addWidget(label_6, 4, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1171, 44));
        widget->setStyleSheet(QString::fromUtf8("QWidget {background-color:rgb(66, 57, 57); color:rgb(255, 255, 255);\n"
"}\n"
""));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QFont font;
        font.setBold(false);
        label_20->setFont(font);

        gridLayout_5->addWidget(label_20, 0, 2, 1, 1);

        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        gridLayout_5->addWidget(label_21, 0, 4, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QFont font1;
        font1.setBold(true);
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_5->setFlat(true);

        gridLayout_5->addWidget(pushButton_5, 0, 9, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_6->setFlat(true);

        gridLayout_5->addWidget(pushButton_6, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 6, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {color: white; border-radius: 6px;min-width: 80px;}"));
        pushButton_7->setFlat(true);

        gridLayout_5->addWidget(pushButton_7, 0, 8, 1, 1);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        gridLayout_5->addWidget(label_22, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 5, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);

        UserProfile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserProfile);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1163, 26));
        UserProfile->setMenuBar(menubar);
        statusbar = new QStatusBar(UserProfile);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserProfile->setStatusBar(statusbar);

        retranslateUi(UserProfile);

        pushButton_5->setDefault(false);
        pushButton_7->setDefault(false);


        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QMainWindow *UserProfile)
    {
        UserProfile->setWindowTitle(QCoreApplication::translate("UserProfile", "MainWindow", nullptr));
        label_14->setText(QCoreApplication::translate("UserProfile", "Underlying Issues", nullptr));
        editdiabetic->setItemText(0, QCoreApplication::translate("UserProfile", "Not diabetic", nullptr));
        editdiabetic->setItemText(1, QCoreApplication::translate("UserProfile", "Type 1", nullptr));
        editdiabetic->setItemText(2, QCoreApplication::translate("UserProfile", "Type 2", nullptr));

        label_10->setText(QCoreApplication::translate("UserProfile", "Diabetic:", nullptr));
        label->setText(QCoreApplication::translate("UserProfile", "BloodType:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UserProfile", "Edit My Details", nullptr));
        pushButton_4->setText(QCoreApplication::translate("UserProfile", "Save Changes", nullptr));
        label_15->setText(QCoreApplication::translate("UserProfile", "Medical records", nullptr));
        label_4->setText(QCoreApplication::translate("UserProfile", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("UserProfile", "E-mail", nullptr));
        label_5->setText(QCoreApplication::translate("UserProfile", "Confirm Password", nullptr));
        pushButton->setText(QCoreApplication::translate("UserProfile", "Save Changes", nullptr));
        label_26->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserProfile", "Edit My Details", nullptr));
        label_25->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("UserProfile", "User Name", nullptr));
        label_9->setText(QCoreApplication::translate("UserProfile", "Area", nullptr));
        editemail->setText(QString());
        label_23->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("UserProfile", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("UserProfile", "Address:", nullptr));
        label_6->setText(QCoreApplication::translate("UserProfile", "Date of Birth", nullptr));
        label_20->setText(QCoreApplication::translate("UserProfile", "First name", nullptr));
        label_21->setText(QCoreApplication::translate("UserProfile", "Balance: ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("UserProfile", "Log out", nullptr));
        pushButton_6->setText(QCoreApplication::translate("UserProfile", "Homepage", nullptr));
        pushButton_7->setText(QCoreApplication::translate("UserProfile", "My Account", nullptr));
        label_22->setText(QCoreApplication::translate("UserProfile", "Last name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
