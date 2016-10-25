//============================================================================
// Name        : 15.cpp
// Author      : Ak0s
//============================================================================

// Write a function that takes an array, its length and a number
// and it returns the index of the given number in the array.
// It should return -1 if did not find it. (linear search)

#include <iostream>
#include <string>

using namespace std;

int index(int array[], int element, int length) {
  int index = -1;

  for (int i = 0; i < length; i++)
    if (array[i] == element)
      index = i;

  return index;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  int length = sizeof(numbers)/sizeof(int);
  int element;

  cout << "Give the number in the array:" << endl;
  cin  >> element;

  if (index(numbers, element, length) > -1) {
    cout << "The typed number index is: " << index(numbers, element, length) << endl;
    cout << "It's the " << index(numbers, element, length) + 1 << ". number of the array!" << endl;
  }
  else {
	cout << "The typed number does not exist in the array!";
  }
  return 0;
}
