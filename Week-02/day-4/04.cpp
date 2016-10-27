//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Write a function that takes an array and its length than reverses the array

#include <iostream>
using namespace std;

void reverse(int array[], int length);

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int length = sizeof(array)/sizeof(int);

  reverse(array,length);

  for (int i = 0; i < length; i++)
       cout << array[i];

  return 0;
}

void reverse(int array[], int length) {
  int temp;
  for (int i = 0; i < length/2; i++) {
	temp = array[length-1-i];
	array[length-1-i] = array[i];
	array[i] = temp;
  }
}
