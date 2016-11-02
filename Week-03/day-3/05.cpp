//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
// then it should return a new pointer that points to the new resized array.
// It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
// It should delete the old array.

#include <iostream>
using namespace std;

int* resize(int array[], int length, int new_length);

int main() {
  int* array = new int[5] {1,2,3,4,5};
  int new_length;
  cout << "How big do you want to resize the array?" << endl;
  cin >> new_length;

  int* resized_array = resize(array, 5, new_length);

  cout << endl << "The resized array is: " << endl;
  for (int i = 0; i < new_length; i++)
    cout << resized_array[i] << " ";

  return 0;
}

int* resize(int array[], int length, int new_length) {
  int* new_array = new int[new_length];

  for(int i = 0; i < new_length; i++) {
    if (i < length) {
      new_array[i] = array [i];
    }
    else
      new_array[i] = 0;
  }

  delete[] array;
  return new_array;
}
