#include <iostream>

#include "../hybridVehicle/HybridVehicle.h"


int main() {
    HybridVehicle myHybrid;
    
    // these vars would be used for the user to input their respective values and passed within the class
    int year;
    double milesDriven, electricMiles, totalKwh, gallons, costOfGallon;

    // adding commented values for short vid
    // 2020
    std::cout << "Enter year of vehicle: " << std::endl;
    std::cin >> year;
    myHybrid.setYear(year);
    // 150
    std::cout << "Enter Miles Driven with Gas: " << std::endl;
    std::cin >> milesDriven;
    myHybrid.setMilesDriven(milesDriven);
    // 300
    std::cout << "Enter Miles Driven with Electric: " << std::endl;
    std::cin >> electricMiles;
    myHybrid.setElectric_miles(electricMiles);
    // 70
    std::cout << "Enter Total Electric Used in kWh: " << std::endl;
    std::cin >> totalKwh;
    myHybrid.setTotal_kwh(totalKwh);
    // 8
    std::cout << "Enter Total Gallons Used: " << std::endl;
    std::cin >> gallons;
    myHybrid.setGallons(gallons);

    std::cout << "MPGe: " << myHybrid.calcMPGe() << std::endl;
    std::cout << "MPG: " << myHybrid.calcMPG() << std::endl;
    // 3.10
    std::cout << "Enter Cost of a Gallon: " << std::endl;
    std::cin >> costOfGallon;

    std::cout << "Cost per mile: " << myHybrid.costPerMile(costOfGallon) << std::endl;


}

