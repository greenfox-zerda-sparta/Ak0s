//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.

// Illustrate both cases in the main function.
// HINT: Put each protected code segment in a new try-catch block.

#include <iostream>
#include <string>
using namespace std;

const char* get_element(int index) throw(int, const char*) {
  const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};
  if (index < 0) {
    throw "You gave a negative number as an index.";
  }
  else if (index > 5) {
    throw index - 5;
  }
  else {
    return sentence[index];
  }
}

int main() {
//============================================================================
  cout << "Case 1: Given index higher than 5" << endl
       << "=================================" << endl;
  try {
    cout << get_element(8);
  }
  catch (int excpi) {
    cout << "Error: The index you gave is larger than the whole array by " << excpi << endl;
  }
  catch (const char* excps) {
    cout << "Error: " << excps << endl;
  }
//============================================================================
  cout << endl << "Case 2: Given index is negative" << endl
               << "===============================" << endl;
  try {
    cout << get_element(-1);
  }
  catch (int excpi) {
    cout << "Error: The index you gave is larger than the whole array by " << excpi << endl;
  }
  catch (const char* excps) {
    cout << "Error: " << excps << endl;
  }
//============================================================================
  return 0;
}

