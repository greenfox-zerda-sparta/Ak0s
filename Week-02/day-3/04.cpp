//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// The "number_pointer" should point to the first element of the array called "numbers",
// than please print its value with it.

#include <iostream>
using namespace std;

void print(int* number_pointer, int length) {
  for (int i = 0; i < length; i++) {
    cout << " " << *(number_pointer+i);
  }
}

int main() {
  int numbers[] = {5, 6, 7, 8, 9};
  int* number_pointer;
  int length = sizeof(numbers)/sizeof(int);

  number_pointer = numbers;
  cout << "The value of 'numbers' array's elements are:";
  print(number_pointer, length);

  return 0;
}
