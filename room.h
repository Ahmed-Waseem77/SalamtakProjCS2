/**
 * Project Untitled
 */


#ifndef _ROOM_H
#define _ROOM_H

class room {
public: 
    void d;
    void Attribute1;
    
/**
 * @param Room
 */
void MarkEmpty(room Room);
    
/**
 * @param Room
 */
void MarkReserved(room Room);
    
void Operation1();
    
void discharge_patient();
protected: 
    bool Empty;
    string Type;
    int MaxCapacity;
    int CurrCapacity;
    int roomNo;
    double room_price;
};

#endif //_ROOM_H