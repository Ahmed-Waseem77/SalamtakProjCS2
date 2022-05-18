#include <iostream>
#include<QString>
#include "Patient.h"
#ifndef OUTPATIENT_H
#define OUTPATIENT_H
 class Outpatient: public patient
{
private:
     QString doctorTomeet;
 public:
     void reserveclinic();
};
#endif // OUTPATIENT_H
