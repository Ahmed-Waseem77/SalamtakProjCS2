/**
 * Project Untitled
 */


#ifndef _INSURANCE_COMPANY_H
#define _INSURANCE_COMPANY_H

class insurance_company {
public: 
    
void Operation1();
    
/**
 * @param companyEmail
 */
void getApproval(string companyEmail);
    
/**
 * @param Bool
 */
void updateApprovalStatus(bool Bool);
private: 
    bool insurance_approved;
    string insuranceCompanyName;
};

#endif //_INSURANCE_COMPANY_H