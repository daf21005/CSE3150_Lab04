#ifndef _VEHICLE_H
#define _VEHICLE_H

#include <iostream>

class vehicle {
    double miles_drove;
    int year;
    
    

    public:
        vehicle();
        vehicle(double _miles_drove, int _year);
        // would i need a destructor?
        vehicle(const vehicle& other);


};

#endif