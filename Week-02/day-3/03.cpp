//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// update the value of number variable to 42 using the "number_pointer"

#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  int* number_pointer = &number;

  cout << "The original value of 'number': " << number << endl;
  *number_pointer = 42;
  cout << "The changed value of 'number' : " << number << endl;

  return 0;
}
