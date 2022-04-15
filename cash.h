/**
 * Project Untitled
 */


#ifndef _CASH_H
#define _CASH_H

#include "payment.h"


class cash: public payment {
public: 
    void Attribute1;
private: 
    
/**
 * @param amount
 */
void payWithCash(float amount);
};

#endif //_CASH_H