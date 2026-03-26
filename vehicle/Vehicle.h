#ifndef _VEHICLE_H
#define _VEHICLE_H

#include <iostream>

class Vehicle {
    // base variables for every vehicle
    protected:
        int year;
        double miles_driven;
    
    public:
        // "The rule of three/five/zero" - For this lab I'm going to do the rule of 5
        // constructors (all 5 - default, parameterized, copy, move, destructor - we dont need the destructor but adding as good practice)
        Vehicle();
        Vehicle(int _year, double _miles_driven);
        Vehicle(const Vehicle& other);
        Vehicle(Vehicle&& other);
        ~Vehicle();

        // getter methods
        double getMilesDriven() const;
        int getYear() const;
        // setter methods
        void setYear(int _year);
        void setMilesDriven(double _miles_driven);
};

#endif