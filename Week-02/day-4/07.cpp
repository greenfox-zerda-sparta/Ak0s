//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// create a function that takes a number and prints a triangle like this:
// *
// **
// ***
// ****
// *****
// ******
//
// The triangle should have as many lines as the value in the argument

#include <iostream>
using namespace std;

void triangle(int number);

int main() {
  int number;

  cout << "The program prints a triangle made of *-s. How many rows do you want?" << endl;
  cin >> number;

  triangle(number);

  return 0;
}

void triangle(int number) {
  for (int i = 1; i <= number; i++) {
    for(int j = 1; j <= i; j++) {
      cout<<"*";
    }
    cout << endl;
  }
}
