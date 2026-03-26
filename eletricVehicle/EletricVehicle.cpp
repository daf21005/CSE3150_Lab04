#include <iostream>

#include "../eletricVehicle/EletricVehicle.h"

ElectricVehicle::ElectricVehicle() : total_kwh{0.0} {}
// i find interesting that i need to pass the vehicle class in here
ElectricVehicle::ElectricVehicle(int _year, double _miles_driven, double _total_kwh, double _electric_miles) : Vehicle{_year, _miles_driven}, total_kwh{_total_kwh}, electric_miles{_electric_miles} {}
ElectricVehicle::ElectricVehicle(const ElectricVehicle & other) : Vehicle{other}, total_kwh{other.total_kwh}, electric_miles{other.electric_miles} {}
ElectricVehicle::~ElectricVehicle() {
    std::cout << "Destructor Called -  from ElectricVehicle" << std::endl;
}

double ElectricVehicle::getTotal_kwh() const {
    return total_kwh;
}

double ElectricVehicle::getElectric_miles() const {
    return electric_miles;
}

void ElectricVehicle::setTotal_kwh(double _total_kwh) {
    total_kwh = _total_kwh;
    return;
}

void ElectricVehicle::setElectric_miles(double _setElectric_miles) {
    electric_miles = _setElectric_miles;
    return;
}

double ElectricVehicle::calcMPGe() {
    return (electric_miles / total_kwh) * 33.7;
}