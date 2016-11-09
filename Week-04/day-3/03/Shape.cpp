//============================================================================
// Name        : 03.cpp - Shape.cpp
// Author      : Ak0s
//============================================================================

// Add a variable to the Shape class. Make it "protected".
// This should be called mArea.
// Create a function that calculates the areas of the shape.
// Update the shapes Triangle and Square to have variables that represent their dimensions,
// that you will need to calculate the area. One would be width, the other height.
// Implement getter and setter functions for them.
// Make sure to call the function that calculates the area and stores it in mArea,
// in the setter functions.
// Create a constructor that takes the height and width as it's parameters.
// Create a deconstructor, that destructs the objects.
//
// Write code into the main function that uses these.
// Make sure it demonstrates how the class works by printing out the results.

#include <iostream>
#include <string>
#include "Shape.hpp"

using namespace std;

string* Shape::getName() {
  return new string("Generic Shape");
}

void Shape::getArea() {
  cout << this->mArea << endl;
}
