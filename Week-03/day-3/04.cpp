//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Create a function called "range" that creates a new array and returns a pointer to it.
// It should fill the array with numbers based on it's paramters.
// It should take 3 paramters:
// int from: the first number in the array
// int to: it will fill the array till it would reach this number (so this number is not in the array)
// int step: the step between the numbers
// Examples:
// range(0, 10, 2) -> {0, 2, 4, 6, 8}
// range(1, -8, -3) -> {1, -2, -5}
// It should delete any dynamically allocated resource before the program exits.

#include <iostream>
using namespace std;

int* range(int from, int to, int step);

int main() {
  int start;
  int end;
  int step;

  cout << "Give the the starting number of the array: ";
  cin >> start;

  cout << "Give the the ending number of the array: ";
  cin >> end;

  cout << "Give the steps between the elements of the array: ";
  cin >> step;

  int* array = range(start,end,step);

  cout << endl << "The allocated array is: " << endl;
  for (int i = 0; i < (end-start)/step; i++)
    cout << array[i] << " ";

  delete[] array;

  return 0;
}

int* range(int from, int to, int step) {
  int length = to - from;
  int* array = new int[length/step];

  for (int i = 0; i < length/step; i++) {
    array[i] = from;
    from += step;
    if (array[i] == to - step) {
      break;
    }
  }

  return array;
}
