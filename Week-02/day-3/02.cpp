//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// print the value of number using the "number_pointer"

#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  int* number_pointer = &number;

  cout << "The value stored at memory address of 'number_pointer' is: " << *number_pointer;

  return 0;
}
