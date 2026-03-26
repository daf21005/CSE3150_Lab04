#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle() : year{0}, miles_driven{0.0} {}
Vehicle::Vehicle(int _year, double _miles_driven) : year{_year}, miles_driven{_miles_driven} {}
Vehicle::Vehicle(const Vehicle& other) : miles_driven{other.miles_driven}, year{other.year} {}
Vehicle::Vehicle(Vehicle&& other) {
    miles_driven = other.miles_driven;
    year = other.year;
    
    other.miles_driven = 0;
    other.year = 0;
}
Vehicle::~Vehicle() {
    // might remove this or print out nothing just for the output looks nicer
    std::cout << "Destructor Called -  from Vehicle" << std::endl;
}

int Vehicle::getYear() const { return year; }
double Vehicle::getMilesDriven() const { return miles_driven; }

void Vehicle::setYear(int _year) {
    year = _year;
}
void Vehicle::setMilesDriven(double _miles_driven) {
    miles_driven = _miles_driven;
}