/**
 * Project Untitled
 */


#ifndef _PAYMENT_H
#define _PAYMENT_H

class payment {
public: 
    void Attribute1;
    
void choosePaymentMethod();
    
void redeemPoints();
    
void choosePayment();
protected: 
    float outstandingPay;
    float paidMoney;
private: 
    bool isPaid;
};

#endif //_PAYMENT_H