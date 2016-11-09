//============================================================================
// Name        : 02.cpp - Shape.hpp
// Author      : Ak0s
//============================================================================

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <iostream>
#include <string>

using namespace std;

class Shape {
  public:
    virtual string* getName();
    virtual ~Shape() {};
};



#endif
