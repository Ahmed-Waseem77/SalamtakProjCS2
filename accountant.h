/**
 * Project Untitled
 */


#ifndef _ACCOUNTANT_H
#define _ACCOUNTANT_H

class accountant {
public: 
    float outstandingPay;
    
/**
 * @param outPay
 * @param PaidM
 */
void settlePayment(float outPay, float PaidM);
    
void sendInvoice();
};

#endif //_ACCOUNTANT_H