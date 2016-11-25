//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Create a function template that takes an array, and its length and return the sum of his elements
// Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
// Create a template specialization for string types, that it returns the sum of the string's first characters position in the alphabet

#include <iostream>
#include <string>

using namespace std;

template <class T>
T sum_of_array(T array[], unsigned int length) {
  T sum;
  for (unsigned int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum;
}

template<>
int sum_of_array<char>(char array[], unsigned int length) {
  int sum;
    for (unsigned int i = 0; i < length; i++) {
      sum += array[i];
    }
    return sum;
}

int main() {

  int array[5] = {1,2,3,4,5};
  string words[5] = {"Pen", "Pinapple", "Apple", "Pen"};

  cout << "Array of integers: " << endl;
  cout << sum_of_array(array,5) << endl;

  cout << "Array of string: " << endl;
  cout << sum_of_array(words,4) << endl;

  return 0;
}
