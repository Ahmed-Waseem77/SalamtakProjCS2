QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Address.cpp \
    Patient.cpp \
    clinicreserve.cpp \
    contactus.cpp \
    emergency.cpp \
    emergency_patient.cpp \
    homepage.cpp \
    inpatient.cpp \
    labreserve.cpp \
    main.cpp \
    medpayment.cpp \
    outpatient.cpp \
    patient_medical_records.cpp \
    payment.cpp \
    reception.cpp \
    registeration.cpp \
    reservation.cpp \
    salamtak.cpp \
    userprofile.cpp

HEADERS += \
    Address.h \
    Outpatient.h \
    Patient.h \
    clinicreserve.h \
    contactus.h \
    emergency.h \
    emergency_patient.h \
    homepage.h \
    inpatient.h \
    labreserve.h \
    medpayment.h \
    patient_medical_records.h \
    payment.h \
    reception.h \
    registeration.h \
    reservation.h \
    room.h \
    salamtak.h \
    userprofile.h

FORMS += \
    clinicreserve.ui \
    contactus.ui \
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
