//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// create a function template that takes 3 long array
// and add the 1st element of it to the third

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add_first_and_last(T array[3]) {
  return array[0]+array[2];
}

int main() {

  int array[3] = {1,2,3};
  string words[3] = {"apple", "pear", "plum"};

  cout << "Array of integers: " << endl;
  cout << add_first_and_last(array) << endl;

  cout << "Array of string: " << endl;
  cout << add_first_and_last(words) << endl;

  return 0;
}
