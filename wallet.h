/**
 * Project Untitled
 */


#ifndef _WALLET_H
#define _WALLET_H

#include "payment.h"


class wallet: public payment {
public: 
    
/**
 * @param amount
 */
void payWithWallet(float amount);
private: 
    float moneyBalance;
};

#endif //_WALLET_H