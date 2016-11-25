//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

//create an integer vector with the size of 5 and print the 3rd element of it

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<int> myvector;

  for (unsigned int i = 1; i <= 5; i++) {
    myvector.push_back(i);
  }

  cout << myvector[2];

  return 0;
}
