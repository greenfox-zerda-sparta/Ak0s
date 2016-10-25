//============================================================================
// Name        : 12.cpp
// Author      : Ak0s
//============================================================================

// write your own sum function
// it should take an array and its length

#include <iostream>
#include <string>

using namespace std;

int sum(int array[], int length, int sumtotal = 0) {

  for (int i = 0; i < length; i++)
    sumtotal += array[i];

  return sumtotal;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  int length = sizeof(numbers)/sizeof(int);

  cout << "The sum of the 'numbers' array is: " << sum(numbers, length);

  return 0;
}
