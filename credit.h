/**
 * Project Untitled
 */


#ifndef _CREDIT_H
#define _CREDIT_H

#include "payment.h"


class credit: public payment {
public: 
    
/**
 * @param amount
 */
void payWithCredit(float amount);
private: 
    int creditCardNo;
    string creditCardName;
    tm expiryDate;
    int creditCVV;
};

#endif //_CREDIT_H