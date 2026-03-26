#include <iostream>

#include "../gasolineVehicle/GasolineVehicle.h"

// constructor
GasolineVehicle::GasolineVehicle() : gallons{0.0} {}
GasolineVehicle::GasolineVehicle(int _year, double _miles_driven, double _gallons) : Vehicle{_year, _miles_driven}, gallons{_gallons} {}
GasolineVehicle::GasolineVehicle(const GasolineVehicle & other) : Vehicle{other}, gallons{other.gallons} {}
GasolineVehicle::~GasolineVehicle() {
    std::cout << "Destructor Called -  from GasolineVehicle" << std::endl;
}

// getter methods
double GasolineVehicle::getGallons() const {
    return gallons;
}

// setter methods
void GasolineVehicle::setGallons(double _gallons) {
    gallons = _gallons;
    return;
}

double GasolineVehicle::calcMPG() {
    return miles_driven / gallons;
}