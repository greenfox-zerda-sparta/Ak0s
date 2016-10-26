//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// print the memory address of the variable

#include <iostream>

using namespace std;

int main() {
  int number = 1234;

  cout << "The memory address of 'number' is: " << &number;

  return 0;
}
