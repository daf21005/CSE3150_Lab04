# CSE3150 Lab 4 - Hybrid vehicles: Mutli-Inheritance

In this lab assignment we are designing a hyrbid vehicle class which inherits from two other classes (the parents), GasolineVehicle and EletricVehicle which both inherits from Vehicle.  
The way this is currently structured is that each class are within their own folder for orginization reasons.  

The architecture of this lab follows a diamond architecture which uses virtual when inheriting from a class.  

## Compile and Run main program:
__Before compile, ensure you are in the CSE3150_Lab04 Directory !__
```
g++ hybridVehicle/mainHybridVehicle.cpp hybridVehicle/HybridVehicle.cpp eletricVehicle/EletricVehicle.cpp gasolineVehicle/GasolineVehicle.cpp vehicle/Vehicle.cpp -o mainHybridProg

/.mainHybridProg
```

## Compile and Run test program:
Something to note about running the unit test, their would be a lot of print statements within the compiler, all coming from the class' destructor.

__Stated earlier before compile, ensure you are in the CSE3150_Lab04 Directory !__
```
g++ hybridVehicle/testHybridVehicle.cpp hybridVehicle/HybridVehicle.cpp eletricVehicle/EletricVehicle.cpp gasolineVehicle/GasolineVehicle.cpp vehicle/Vehicle.cpp -o testHybridProg

/.testHybridProg
```
