/**
 * Project Untitled
 */


#ifndef _DEPARTMENT_H
#define _DEPARTMENT_H

class department {
public: 
    
/**
 * @param dept
 */
void AreNRFull(department dept);
    
/**
 * @param dept
 */
void AreVRFull(department dept);
    
/**
 * @param dept
 */
void AreSRFull(department dept);
    
void AreNroomsFull();
    
void AreSroomsFull();
    
void AreVIProomsFull();
    
/**
 * @param d
 */
string search_doctor(dept d);
    
void Operation1();
private: 
    const int NRMaxCapacity;
    vip_room* VIProoms;
    const int VRMaxCapacity;
    const int SRMaxCapacity;
    int NRCurrCapacity;
    int VRCurrCapacity;
    normal_room* Nrooms;
    int SRCurrCapacity;
    bool NRFull;
    bool VRFull;
    bool SRFull;
    suite_room* Srooms;
    vip_room* VIProoms;
    string* specialization;
};

#endif //_DEPARTMENT_H