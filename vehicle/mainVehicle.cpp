#include <iostream>
#include "Vehicle.h"

int main() {
    Vehicle myVehicle;
    Vehicle myVehicle2(2020, 15000.0);

    std::cout << myVehicle.getYear() << std::endl;
    std::cout << myVehicle.getMilesDriven() << std::endl;

    std::cout << myVehicle2.getYear() << std::endl;
    std::cout << myVehicle2.getMilesDriven() << std::endl;

}