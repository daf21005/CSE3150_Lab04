#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../include/doctest.h"
#include "../hybridVehicle/HybridVehicle.h"

TEST_CASE("Default constructor") {
    HybridVehicle myHybrid;
    // from vehicle
    CHECK(myHybrid.getYear() == 0);
    CHECK(myHybrid.getMilesDriven() == 0.0);
    // from electric and gasoline
    CHECK(myHybrid.getTotal_kwh() == 0.0);
    CHECK(myHybrid.getGallons() == 0.0);
}

TEST_CASE("Parameterized Constructor") {
    HybridVehicle myHybrid(2022, 150.0, 70.0, 300.0, 8.0);

    CHECK(myHybrid.getYear() == 2022);
    CHECK(myHybrid.getMilesDriven() == 150.0);
    CHECK(myHybrid.getTotal_kwh() == 70.0);
    CHECK(myHybrid.getElectric_miles() == 300.0);
    CHECK(myHybrid.getGallons() == 8.0);

    // verify calculations work from parameterized construction
    CHECK(myHybrid.calcMPGe() == doctest::Approx(144.429).epsilon(0.01));
    CHECK(myHybrid.calcMPG() == doctest::Approx(18.75).epsilon(0.01));
    CHECK(myHybrid.costPerMile(3.10) == doctest::Approx(0.0924).epsilon(0.01));
}


TEST_CASE("Test Both Setter and Calculation Method") {
    HybridVehicle myHybrid;
    myHybrid.setYear(2020);
    myHybrid.setMilesDriven(150.0);
    myHybrid.setElectric_miles(300.0);
    myHybrid.setTotal_kwh(70.0);
    myHybrid.setGallons(8.0);

    CHECK(myHybrid.getYear() == 2020);
    CHECK(myHybrid.getMilesDriven() == 150.0);
    CHECK(myHybrid.getTotal_kwh() == 70.0);
    CHECK(myHybrid.getGallons() == 8.0);
    CHECK(myHybrid.getElectric_miles() == 300.0);
    
    // since these numbers could be very small, we will need to use doctest's approx wrapper class
    // we are also using .epsilon to allow 1% of error 
    CHECK(myHybrid.calcMPGe() == doctest::Approx(144.429).epsilon(0.01));
    CHECK(myHybrid.calcMPG() == doctest::Approx(18.75).epsilon(0.01));
    CHECK(myHybrid.costPerMile(3.10) == doctest::Approx(0.0924).epsilon(0.01));
}


TEST_CASE("Copy Constructor") {
    // original object with known values
    HybridVehicle original;
    original.setYear(2020);
    original.setMilesDriven(150.0);
    original.setElectric_miles(300.0);
    original.setTotal_kwh(70.0);
    original.setGallons(8.0);

    // invoke copy constructor
    HybridVehicle copy(original);

    // verify copy has same values as original
    CHECK(copy.getYear() == original.getYear());
    CHECK(copy.getMilesDriven() == original.getMilesDriven());
    CHECK(copy.getElectric_miles() == original.getElectric_miles());
    CHECK(copy.getTotal_kwh() == original.getTotal_kwh());
    CHECK(copy.getGallons() == original.getGallons());

    // verify calculations produce same results
    CHECK(copy.calcMPGe() == doctest::Approx(original.calcMPGe()).epsilon(0.01));
    CHECK(copy.calcMPG() == doctest::Approx(original.calcMPG()).epsilon(0.01));
    CHECK(copy.costPerMile(3.10) == doctest::Approx(original.costPerMile(3.10)).epsilon(0.01));

    // verify copy is independent — changing copy doesn't affect original
    copy.setGallons(15.0);
    CHECK(original.getGallons() == 8.0);  // original should be unchanged
}

