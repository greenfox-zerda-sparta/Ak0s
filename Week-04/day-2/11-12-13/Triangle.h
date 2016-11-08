//============================================================================
// Name        : 11-12-13.cpp - Triangle.h
// Author      : Ak0s
//============================================================================

// Create a triangle class that takes a length parameter and prints a triangle like this:
//   *
//   **
//   ***
//   ****
//   *****
//   ******
// It should take a number as parameter that describes how many lines the triangle has

// Create a triangle class that takes a length parameter and prints a pyramid like this:
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
//
// It should take a number as parameter that describes how many lines the triangle has

// Create a triangle class that takes a length parameter and prints a diamond like this:
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *
// It should take a number as parameter that describes how many lines the diamond has

#include <iostream>

class Triangle {
  private:
    int length;
  public:
    void print_triangle(int length);
    void print_pyramid(int length);
    void print_diamond(int length);
};
