//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Write a function that decides if an array includes at least one negative number or not

#include <iostream>
using namespace std;

bool has_neg_element(int array[], int length);

int main() {
  int numbers[] = {6, 5, -3, 4, -1, 8, 7};
  int length = sizeof(numbers)/sizeof(int);

  if (has_neg_element(numbers,length) == 0) {
    cout << "There isn't any negative number in the given array!";
  }
  else {
	cout << "There is a negative number in the given array!";
  }

  return 0;
}

bool has_neg_element(int array[], int length) {
  bool neg_found = false;
  for (int i = 0; i < length; i++) {
    if (array[i] < 0) {
      neg_found = true;
      break;
    }
  }
  return neg_found;
}
