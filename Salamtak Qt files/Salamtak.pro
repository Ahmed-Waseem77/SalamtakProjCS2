QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clinicreserve.cpp \
    emergency.cpp \
    homepage.cpp \
    labreserve.cpp \
    main.cpp \
    medpayment.cpp \
    payment.cpp \
    reception.cpp \
    registeration.cpp \
    reservation.cpp \
    salamtak.cpp \
    userprofile.cpp

HEADERS += \
    Patient.h \
    clinicreserve.h \
    emergency.h \
    homepage.h \
    labreserve.h \
    medpayment.h \
    payment.h \
    reception.h \
    registeration.h \
    reservation.h \
    salamtak.h \
    userprofile.h

FORMS += \
    clinicreserve.ui \
    emergency.ui \
    homepage.ui \
    labreserve.ui \
    medpayment.ui \
    payment.ui \
    reception.ui \
    registeration.ui \
    reservation.ui \
    salamtak.ui \
    userprofile.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

TARGET = Salamtak
TEMPLATE = app
QT += widgets
QT += sql
RESOURCES += resources.qrc
