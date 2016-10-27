//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Write a function that takes an array and squares all the elements in the array

#include <iostream>
#include <string>
using namespace std;

int square_elements(int array[], int length);

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int length = sizeof(array)/sizeof(int);

  square_elements(array,length);

  return 0;
}

int square_elements(int array[], int length) {
  for (int i = 0; i < length; i++) {
    array[i] *= array[i];
    cout << array[i] << " ";
  }
  return 0;
}
