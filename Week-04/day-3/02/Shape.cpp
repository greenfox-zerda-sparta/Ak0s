//============================================================================
// Name        : 02.cpp - Shape.cpp
// Author      : Ak0s
//============================================================================

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

#include <iostream>
#include <string>
#include "Shape.hpp"

using namespace std;

string* Shape::getName() {
  return new string("Generic Shape");
}
