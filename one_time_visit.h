/**
 * Project Untitled
 */


#ifndef _ONE_TIME_VISIT_H
#define _ONE_TIME_VISIT_H

#include "nursing_visit.h"
#include "homeVisit.h"


class one_time_visit: public nursing_visit, public homeVisit {
public: 
    void Attribute1;
    
void contact_us();
};

#endif //_ONE_TIME_VISIT_H