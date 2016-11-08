//============================================================================
// Name        : 11-12-13.cpp
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
#include "Triangle.h"

using namespace std;

int main() {

  Triangle triangle;
  triangle.print_triangle(5);
  cout << endl;
  triangle.print_pyramid(5);
  cout << endl;
  triangle.print_diamond(8);

  return 0;
}
