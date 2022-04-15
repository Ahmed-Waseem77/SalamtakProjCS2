/**
 * Project Untitled
 */


#ifndef _EMERGENCY_H
#define _EMERGENCY_H

class Emergency {
public: 
    void f;
    
void order_ambulance();
    
void are_rooms_full();
    
void empty_rooms();
    
void fill_room();
    
void sendConfirmation();
private: 
    int room_max_capacity;
    int room_curr_capacity;
    bool AreRoomsFull;
};

#endif //_EMERGENCY_H