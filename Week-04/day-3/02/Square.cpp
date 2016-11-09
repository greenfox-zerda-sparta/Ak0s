//============================================================================
// Name        : 02.cpp - Square.cpp
// Author      : Ak0s
//============================================================================

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

#include <iostream>
#include <string>
#include "Square.hpp"

using namespace std;

string* Square::getName() {
  return new string("Square");
}
