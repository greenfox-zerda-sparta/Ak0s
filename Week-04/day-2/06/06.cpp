//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Create a `Circle` class that takes it's radius as constructor parameter
// It should have a `get_circumference` method that returns it's circumference
// It should have a `get_area` method that returns it's area

#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main() {

  Circle circle1(5);

  cout << "The circumference of the given circle is: " << circle1.get_circumference() << endl;
  cout << "The area of the given circle is: " << circle1.get_area() << endl;

  return 0;
}
