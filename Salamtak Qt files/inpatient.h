#ifndef INPATIENT_H
#define INPATIENT_H
#include "Patient.h"
#include "room.h"
class inpatient: public patient
{
private:
    int room_number;
    bool isReleased;
    bool isRoomapproved;
    room patient_room;
public:
    void reserve_room();
};
#endif // INPATIENT_H
