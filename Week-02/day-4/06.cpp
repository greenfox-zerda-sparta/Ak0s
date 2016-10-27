//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Write a function that counts how many times is an even number is followed by
// another even number in an array

#include <iostream>
#include <string>
using namespace std;

int even_counter(int array[], int length);

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};
  int length = sizeof(numbers)/sizeof(int);

  even_counter(numbers, length);

  return 0;
}

int even_counter(int array[], int length) {
  int counter = 0;
  for (int i = 0; i < length-1; i++) {
    if ((array[i]%2 == 0) && (array[i+1]%2 == 0)) {
      counter++;
    }
  }
  cout << "The number of continuous even numbers in the given array is: " << counter;
  return counter;
}
