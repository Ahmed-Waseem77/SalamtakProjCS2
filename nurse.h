/**
 * Project Untitled
 */


#ifndef _NURSE_H
#define _NURSE_H

#include "staff.h"


class nurse: public staff {
public: 
    
void checkMedDelivery();
private: 
    bool isMedDelivered;
};

#endif //_NURSE_H