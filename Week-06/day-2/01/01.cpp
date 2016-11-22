//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

#include <iostream>
using namespace std;

int main() {

  try {
    throw 20;
  }
  catch(int a) {
    cout << "The threw number is: " << a;
  }

  return 0;
}
