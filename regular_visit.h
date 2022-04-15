/**
 * Project Untitled
 */


#ifndef _REGULAR_VISIT_H
#define _REGULAR_VISIT_H

#include "nursing_visit.h"
#include "homeVisit.h"


class regular_visit: public nursing_visit, public homeVisit {
public: 
    
void how_often();
    
void reason_for_visit();
private: 
    tm* weeklyAppointments;
};

#endif //_REGULAR_VISIT_H