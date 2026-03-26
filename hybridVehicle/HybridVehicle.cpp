#include <iostream>

#include "HybridVehicle.h"

HybridVehicle::HybridVehicle() {}
HybridVehicle::HybridVehicle(int _year, double _miles_driven, double _total_kwh, double _electric_miles, double _gallons) : Vehicle{_year, _miles_driven}, ElectricVehicle{_year, _miles_driven, _total_kwh, _electric_miles}, GasolineVehicle{_year, _miles_driven, _gallons} {}
// since no new variables is created here - we simply pass itself to rest of the classes
HybridVehicle::HybridVehicle(const HybridVehicle & other) : Vehicle{other}, ElectricVehicle{other}, GasolineVehicle{other} {}

HybridVehicle::~HybridVehicle() {
    std::cout << "Destructor Called -  from HybridVehicle" << std::endl;
} 


// finish this (WIP)
double HybridVehicle::costPerMile(double costOfOneGallon) {
    double gasCostPerMile = costOfOneGallon / calcMPG();
    // 24 cents per kWh in CT
    double electricCostPerMile = (0.24 * total_kwh) / electric_miles;

    double totalMiles = miles_driven + electric_miles;
    return ((gasCostPerMile * miles_driven) + (electricCostPerMile * electric_miles)) / totalMiles;
}