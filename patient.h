/**
 * Project Untitled
 */


#ifndef _PATIENT_H
#define _PATIENT_H

class patient {
public: 
    void Attribute1;
    void Attribute2;
    int credit_card;
    void Attribute3;
    void Attribute4;
    
void Operation1();
    
void rateDr();
    
void editTOP();
    
/**
 * @param address
 */
void editAddress(patientAddress address);
    
Reservation reserveClinic();
    
Reservation reserveConslutation();
    
Reservation reserve_emergency();
    
Reservation reserveLabTest();
    
Reservation reserveRoom();
    
Reservation reserveHomeVisit();
    
void rateHospitaService();
    
/**
 * @param patient_medical_records
 */
void updateRecord(void patient_medical_records);
    
/**
 * @param name
 */
void editInsurance(string name);
protected: 
    string Name;
    string ID;
    Address Address;
    string typeofpayment;
    string dateofbirth;
    string bloodtype;
private: 
    string email;
};

#endif //_PATIENT_H