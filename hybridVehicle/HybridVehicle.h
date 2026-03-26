#ifndef _HYBRID_VEHICLE_H
#define _HYBRID_VEHICLE_H

#include <iostream>

#include "../gasolineVehicle/GasolineVehicle.h"
#include "../eletricVehicle/EletricVehicle.h"

class HybridVehicle : public ElectricVehicle, public GasolineVehicle{

    public:
        // constructors
        HybridVehicle();
        HybridVehicle(int _year, double _miles_drove, double _total_kwh, double _electric_miles, double _gallons);
        HybridVehicle(const HybridVehicle & other);
        ~HybridVehicle();

        // methods
        double costPerMile(double costOfOneGallon);

};

#endif