/**
 * Project Untitled
 */


#ifndef _VIP_ROOM_H
#define _VIP_ROOM_H

#include "room.h"


class vip_room: public room {
public: 
    
void s();
private: 
    const int VRMaxCapacity;
    int VRCurrCapacity;
    double room_price;
};

#endif //_VIP_ROOM_H