/**
 * Project Untitled
 */


#ifndef _INPATIENT_H
#define _INPATIENT_H

#include "patient.h"


class inpatient: public patient {
private: 
    int room_number;
    bool isReleased;
    bool isMedDelivered;
};

#endif //_INPATIENT_H