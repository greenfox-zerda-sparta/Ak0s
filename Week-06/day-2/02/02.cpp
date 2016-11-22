//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// Write the body of the function below.
// It should throw an exception when b is zero.
// Check the result.

#include <iostream>
using namespace std;

float division(float a, float b) throw (int) {
  if (b == 0) {
    throw 0;
  }
  else {
    return a/b;
  }
}

int main() {
  try {
    cout << "Division result: " << division(1, 2) << endl;
    cout << "Division result: " << division(2, 0) << endl;
  }
  catch (int excp) {
    cout << "Exception: " << excp << endl;
  }
  return 0;
}
