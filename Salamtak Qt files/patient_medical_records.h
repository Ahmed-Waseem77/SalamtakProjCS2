#include <iostream>
#include <QString>
#include "Patient.h"
#ifndef PATIENT_MEDICAL_RECORDS_H
#define PATIENT_MEDICAL_RECORDS_H
class patient_medical_records: public patient
{
private:
    QString blood_type;
    QString significantRecords;
    bool diabetic;
};
#endif // PATIENT_MEDICAL_RECORDS_H
