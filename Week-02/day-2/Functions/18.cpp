//============================================================================
// Name        : 18.cpp
// Author      : Ak0s
//============================================================================

// create a function that takes an array and it's length as an agrument
// and returns a number that states how many even numbers are in the array

#include <iostream>
using namespace std;

int even(int array[], int length) {
  int evens = 0;

  for (int i = 0; i < length; i++) {
    if (array[i]%2 == 0) {
      evens += 1;
    }
  }
  return evens;
}

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  int length = sizeof(numbers)/sizeof(int);

  cout << "The number of even(s): " << even(numbers,length);

  return 0;
}
