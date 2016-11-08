//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// Create a class called "Car"
// It should have a "type" property that stores the car's type in a string eg: "Mazda"
// It should have a "km" property that stores how many kilometers it have run
// The km and the type property should be a parmeter in the constructor
// It should have a method called "run" that takes a number and increments the "km" property by it

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main() {

  Car new_car("Volvo",200000);

  // Increment the mileage of the give car by 20000:
  cout << "New mileage of the car: " << new_car.run(20000);

  return 0;
}
