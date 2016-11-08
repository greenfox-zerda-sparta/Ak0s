//============================================================================
// Name        : 07.cpp - Car.cpp
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

Car::Car(string type, unsigned int km) {
  this->type = type;
  this->km = km;
}

unsigned int Car::run(unsigned int add_km) {
  return this->km += add_km;
}
