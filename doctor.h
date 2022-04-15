/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

#include "staff.h"


class doctor: public staff {
public: 
    
/**
 * @param n
 */
void setName(string n );
    
void getName();
    
/**
 * @param id
 */
void setID(string id);
    
void getID();
    
void decide_nights();
    
/**
 * @param med
 */
void assignMeds(medicine* med);
    
/**
 * @param Patient
 */
void dischargePatient(patient Patient);
    
/**
 * @param tm
 */
bool checkAvailablity(void tm);
private: 
    string Name;
    string ID;
    department dept;
    int rating;
    string* specialization;
};

#endif //_DOCTOR_H