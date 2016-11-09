//============================================================================
// Name        : 02.cpp - Square.hpp
// Author      : Ak0s
//============================================================================

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

#include <iostream>
#include <string>
#include "Shape.hpp"

using namespace std;

class Square: public Shape {
  public:
    string* getName();
};



#endif
