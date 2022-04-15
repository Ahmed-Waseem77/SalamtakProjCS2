/**
 * Project Untitled
 */


#ifndef _PATIENTADRESS_H
#define _PATIENTADRESS_H

#include "Address.h"


class PatientAdress: public Address {
private: 
    int Floor_Number;
    int Apartment_Number;
};

#endif //_PATIENTADRESS_H