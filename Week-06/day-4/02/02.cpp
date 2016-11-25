//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

//create an integer vector with the size of 5 and print all elements of it

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<int> myvector;

  for (unsigned int i = 1; i <= 5; i++) {
    myvector.push_back(i);
  }

  for (unsigned int i = 0; i < myvector.size(); i++) {
    cout << myvector[i] << " ";
  }

  return 0;
}
