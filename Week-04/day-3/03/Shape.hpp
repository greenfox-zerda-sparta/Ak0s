//============================================================================
// Name        : 03.cpp - Shape.hpp
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

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

#include <iostream>
#include <string>

using namespace std;

class Shape {
  public:
    virtual string* getName();
    virtual int setArea() = 0;
    virtual void getWidth() = 0;
    virtual void getHeight() = 0;
    virtual void setWidth(int width) = 0;
    virtual void setHeight(int height) = 0;
    void getArea();
    virtual ~Shape() {};
  protected:
    int mArea;
};



#endif
