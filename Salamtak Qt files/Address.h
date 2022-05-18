#include <iostream>
#include <QString>
#include "Patient.h"
#ifndef ADDRESS_H
#define ADDRESS_H
class Address: public patient
{
private:
    QString city;
    QString area;
    QString street_name;
    int building_number;
};
#endif // ADDRESS_H
