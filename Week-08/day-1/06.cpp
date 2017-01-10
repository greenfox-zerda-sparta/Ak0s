//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in the calculations.

#include <iostream>
#include <time.h>
using namespace std;

#define MY_PI 3.14


float circumference_of_circle(int radius) {
  return 2 * MY_PI * radius;
}

float area_of_circle(int radius) {
  return radius * radius * MY_PI;
}

int main() {
  srand(time(NULL));
  int array[5];

  for (unsigned int i = 0; i < 5; i++) {
    array[i] = rand() % 100;
  }

  for (unsigned int i = 0; i < 5; i++) {
    cout << "Stats of " << i + 1 << ". circle:" << endl
         << "=============================" << endl
         << circumference_of_circle(array[i]) << endl
         << area_of_circle(array[i]) << endl << endl;
  }

	return 0;
}
