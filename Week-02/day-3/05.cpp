//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// The "number_pointer" should point to the third element of the array called "numbers", than please print its value with it.
// Solve the problem without reusing the "&" operator for getting the address of the third element.

#include <iostream>

using namespace std;

int main() {
  int numbers[] = {5, 6, 7, 8, 9};

  int* number_pointer = &numbers[0];

  number_pointer += 2;
  cout << "The value stored at memory address of 'number_pointer' is: " << *number_pointer;

  return 0;
}
