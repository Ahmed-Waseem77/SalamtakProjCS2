/**
 * Project Untitled
 */


#ifndef _MEDICINE_H
#define _MEDICINE_H

#include "Pharmacy_item.h"
#include "Pharmacy_Item.h"


class medicine: public Pharmacy_item, public Pharmacy_Item {
private: 
    tm productionDate;
    tm expiryDate;
};

#endif //_MEDICINE_H