#include "Vehicle.h"

vehicle::vehicle(): year(0), miles_drove(0.0) {}
vehicle::vehicle(double _miles_drove, int _year) : miles_drove(_miles_drove), year(_year) {}
vehicle::vehicle(const vehicle& other) : miles_drove(other.miles_drove), year(other.year) {}

// Complex::Complex() : real{0.0}, imag{0.0} {}
// Complex::Complex(double _real, double _imag) : real{_real}, imag{_imag} { }