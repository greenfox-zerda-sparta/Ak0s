//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// create a function template which takes in an array, and the size of it
// print all the elements of the array

#include <iostream>
#include <string>

using namespace std;

template <typename T>
void print_array(T array[], unsigned int length) {
  for (unsigned int i = 0; i < length; i++) {
    cout << array[i] << " ";
  }
}

int main() {

  int array[3] = {1,2,3};
  string words[3] = {"apple", "pear", "plum"};

  cout << "Array of integers: " << endl;
  print_array(array,3);

  cout << endl << "Array of string: " << endl;
  print_array(words,3);

  return 0;
}
