//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// write a function that takes an array and a length and it fills the array
// with numbers from zero till the length

#include <iostream>
using namespace std;

int filler(int array[], int length);

int main() {
  int array[10];
  int length = sizeof(array)/sizeof(int);

  filler(array,length);

  return 0;
}

int filler(int array[], int length) {
  for (int i = 0; i < length; i++) {
    array[i] = i;
    cout << array[i];
  }
  return 0;
}
