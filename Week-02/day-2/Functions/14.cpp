//============================================================================
// Name        : 14.cpp
// Author      : Ak0s
//============================================================================

// Write a function that takes an array and its length returns the minimal element
// in the array (your own min function)

#include <iostream>
#include <string>

using namespace std;

int min(int array[], int length) {
  int minimum = array[0];

  for (int i = 1 ; i < length ; i++) {
    if ( minimum > array [i+1] ) {
      minimum = array [i+1];
	}
  }
  return minimum;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  int length = sizeof(numbers)/sizeof(int);

  cout << min(numbers,length);

  return 0;
}
