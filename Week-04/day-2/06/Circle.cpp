//============================================================================
// Name        : 06.cpp - Circle.cpp
// Author      : Ak0s
//============================================================================

// Create a `Circle` class that takes it's radius as constructor parameter
// It should have a `get_circumference` method that returns it's circumference
// It should have a `get_area` method that returns it's area

#include <iostream>
#include "Circle.h"

Circle::Circle(unsigned int rad) {
  this->radius = rad;
}

float Circle::get_circumference() {
  return 3.14 * 2 * this->radius;
}

float Circle::get_area() {
  return 3.14 * this->radius * this->radius;
}

