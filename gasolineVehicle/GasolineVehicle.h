#ifndef _GASOLINE_VEHICLE_H
#define _GASOLINE_VEHICLE_H

#include <iostream>

#include "../vehicle/Vehicle.h"

class GasolineVehicle : public virtual Vehicle {
    protected:
        double gallons;
    // double MPG; // miles per gallon - miles/gallon

    public:
        // constructors
        GasolineVehicle();
        GasolineVehicle(int _year, double _miles_driven, double _gallons);
        GasolineVehicle(const GasolineVehicle & other);
        ~GasolineVehicle();

        // getter methods
        double getGallons() const;
        // setter methods
        void setGallons(double _gallons);

        double calcMPG();
};

#endif