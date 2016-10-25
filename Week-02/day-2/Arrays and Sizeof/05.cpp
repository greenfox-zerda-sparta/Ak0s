//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// increment the 3rd element, than print all the elements of the array

#include <iostream>
#include <string>

using namespace std;

int main() {
  int e[] = {1, 2, 3, 4, 5};
  e[2]++;

  cout << "The elements of 'e' are:";

  for (int i = 0; i < sizeof(e)/sizeof(int) ; i++) {
    cout << " " << e[i];
  }
  return 0;
}
