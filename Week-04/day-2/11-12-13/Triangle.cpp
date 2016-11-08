//============================================================================
// Name        : 11-12-13.cpp - Triangle.cpp
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

void Triangle::print_triangle(int length) {
  for (int i = 0; i < length; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void Triangle::print_pyramid(int length) {
  int i, j, k;
  k = length - 1;
  for (i = 1; i <= length; i++) {
    for (j = 1; j <= k; j++) {
      cout << " ";
    }
    k--;
    for (j = 1; j <= 2*i-1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void Triangle::print_diamond(int length) {
  if (length%2 != 0) {
    length++;
  }
  print_pyramid(length / 2);

// Prints a reversed diamond
  int i, j, k = 1;
  for (i = 1; i <= length / 2 - 1; i++) {
    for (j = 1; j <= k; j++) {
      cout<<" ";
    }
    k++;
    for (j = 1 ; j <= 2 * (length/2 - i) - 1; j++) {
      cout << "*";
    }
    cout<< endl;
  }
}
