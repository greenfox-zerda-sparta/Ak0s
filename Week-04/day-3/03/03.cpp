//============================================================================
// Name        : 03.cpp
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
#include "Triangle.hpp"
#include "Square.hpp"

using namespace std;

int main() {
  Triangle* triangle = new Triangle(10,4);
  Square* square = new Square(5);
  Shape* a;

  a = triangle;
  a->setArea();
  cout << "TRIANGLE" << endl;
  cout << "Width: "; a->getWidth();
  cout << "Height: "; a->getHeight();
  cout << "Based on these the area of the " << *a->getName() << " is: ";
  a->getArea();

  cout << endl;

  a = square;
  a->setArea();
  cout << "SQUARE" << endl;
  cout << "Width: "; a->getWidth();
  cout << "Height: "; a->getHeight();
  cout << "Based on these the area of the " << *a->getName() << " is: ";
  a->getArea();

  delete triangle;
  delete square;

  return 0;
}
