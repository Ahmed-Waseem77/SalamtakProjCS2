/**
 * Project Untitled
 */


#ifndef _RESERVE EMERGENCY_H
#define _RESERVE EMERGENCY_H

#include "Reservation.h"


class reserve emergency: public Reservation {
public: 
    int room_max_capacity;
    int room_curr_capacity;
    
void reserveemergency();
    
void are_rooms_full();
    
void empty_rooms();
    
void fill_room();
};

#endif //_RESERVE EMERGENCY_H