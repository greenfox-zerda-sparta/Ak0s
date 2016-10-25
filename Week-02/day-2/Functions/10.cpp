//============================================================================
// Name        : 10.cpp
// Author      : Ak0s
//============================================================================

// create a function that doubles it's input
// double j with it

#include <iostream>
#include <string>

using namespace std;

int doubled(int a) {
  a *= 2;
  return a;
}

int main() {
  int j = 123;

  cout << "The double of 'j' is: " << doubled(j);

  return 0;
}
