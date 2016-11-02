//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// Please allocate a 10 long array and fill it with numbers from 0 to 9, then print the whole array
// Please delete the array before the program exits

#include <iostream>
using namespace std;

int main() {
  int* pointer = new int[10];
  for (int i = 0; i < 10; i++) {
	  pointer[i] = i;
  }

  cout << "The allocated array is: " << endl;
  for (int i = 0; i < 10; i++)
    cout << pointer[i] << " ";

  delete pointer;

  cout << endl << "After delete the array: " << endl;
  for (int i = 0; i < 10; i++)
    cout << pointer[i] << " ";

  return 0;
}
