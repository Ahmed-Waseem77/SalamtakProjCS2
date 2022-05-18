#ifndef ROOM_H
#define ROOM_H

class room{
protected:
    bool empty;
    int maxcap;
    int mincap;
    int roomNo;
    double room_price;
public:
    void setEmpty(bool empty);
    void markEmpty();
    void markReserved();
};

#endif // ROOM_H
