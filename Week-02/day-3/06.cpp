//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// The "other_high_number_pointer" should point to the same memory address
// without using the "&" operator.

#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* high_number_pointer = &high_number;
  int* other_high_number_pointer = high_number_pointer;

  cout << "The memory address stored in 'high_number_pointer': " << high_number_pointer << endl;
  cout << "The memory address stored in 'other_high_number_pointer': " << other_high_number_pointer;

  return 0;
}
