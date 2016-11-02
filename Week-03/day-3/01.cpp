//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
// Please delete the array before the program exits

#include <iostream>
using namespace std;

int main() {
  int* pointer = new int[5];
  for (int i = 0; i < 5; i++) {
	  pointer[i] = i;
  }

  cout << "The allocated array is: " << endl;
  for (int i = 0; i < 5; i++)
    cout << pointer[i] << " ";

  delete pointer;

  cout << endl << "After delete the array: " << endl;
  for (int i = 0; i < 5; i++)
    cout << pointer[i] << " ";

  return 0;
}
