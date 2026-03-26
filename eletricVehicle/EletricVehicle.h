#ifndef _ELECTRIC_VEHICLE_H
#define _ELECTRIC_VEHICLE_H

#include <iostream>

#include "../vehicle/Vehicle.h"

class ElectricVehicle : public virtual Vehicle {
    protected:
        // how much electricity is used
        double total_kwh;
        // the number of miles used wit electricity
        double electric_miles;

    public:
        // constructors
        ElectricVehicle();
        ElectricVehicle(int _year, double _miles_driven, double _total_kwh, double _electric_miles);
        ElectricVehicle(const ElectricVehicle & other);
        ~ElectricVehicle();

        // getter methods
        double getTotal_kwh() const;
        double getElectric_miles() const;
        // setter methods
        void setTotal_kwh(double _total_kwh);
        void setElectric_miles(double _electric_miles);

        double calcMPGe();
};

#endif