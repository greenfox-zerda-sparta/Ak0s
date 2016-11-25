//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// create a function template the takes in a fix long array and prints the 1st element of it

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T get_first_element(T array[]) {
  return array[0];
}

int main() {

  int array[5] = {1,2,3,4,5};
  string words[5] = {"apple", "pear", "plum", "carrot", "anus"};

  cout << "Array of integers: " << endl;
  cout << get_first_element(array) << endl;

  cout << "Array of string: " << endl;
  cout << get_first_element(words) << endl;

  return 0;
}
