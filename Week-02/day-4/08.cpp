//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// Create a function that takes a number and prints a triangle like this:
//
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//
// The triangle should have as many lines as the value in the argument

#include <iostream>
using namespace std;

void pyramid(int number);

int main() {
  int number;

  cout << "The program prints a pyramid made of *-s. How many rows do you want?" << endl;
  cin >> number;

  pyramid(number);

  return 0;
}

void pyramid(int number) {
  int i, j, k;

  k = number - 1;

  for (i = 1; i <= number; i++) {
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

// first for: makes new lines after filling the rows
// second for: makes space equal to the number of line -1 (last line don't need space)
// third for: makes the stars after the spaces
