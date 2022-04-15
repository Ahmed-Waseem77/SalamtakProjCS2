/**
 * Project Untitled
 */


#ifndef _HOMEVISIT_H
#define _HOMEVISIT_H

#include "Reservation.h"


class homeVisit: public Reservation {
public: 
    
bool locationAvailability();
private: 
    float price;
};

#endif //_HOMEVISIT_H