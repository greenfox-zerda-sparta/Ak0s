//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// Please fix the problem and swap the value of the variables,
// without using the "high_number" and the "low_number" variables.

#include <iostream>

using namespace std;

void swap (int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* high_number_pointer = &low_number;
  int* low_number_pointer = &high_number;

  cout << "The two pointer before swapping them:" << endl;
  cout << "high_number_pointer: " << high_number_pointer << "   *high_number_pointer: " << *high_number_pointer << endl;
  cout << "low_number_pointer: " << low_number_pointer << "   *low_number_pointer: " << *low_number_pointer <<endl;

  swap(high_number_pointer, low_number_pointer);

  cout << endl << "The two pointer after swapping them:" << endl;
  cout << "high_number_pointer: " << high_number_pointer << "   *high_number_pointer: " << *high_number_pointer << endl;
  cout << "low_number_pointer: " << low_number_pointer << "   *low_number_pointer: " << *low_number_pointer <<endl;

  return 0;
}
