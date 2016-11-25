//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// create a function template that takes an array and sort it in a descending order

#include <iostream>
#include <string>

using namespace std;

template <typename T>
void descending_order_array(T array[], unsigned int length) {
  T temp;
  for (unsigned int i = 0; i < length; i++) {
    for (unsigned int j = i + 1; j < length; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  for (unsigned int i = 0; i < 3; i++) {
    cout << array[i] << " ";
  }
}

int main() {

  int array[3] = {1,2,3};
  string words[3] = {"pear", "plum", "apple"};

  cout << "Array of integers: " << endl;
  descending_order_array(array,3);

  cout << endl << "Array of string: " << endl;
  descending_order_array(words,3);

  return 0;
}
