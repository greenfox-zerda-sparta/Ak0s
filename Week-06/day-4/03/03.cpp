//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

//Create a vector of integers
//reserve place for 10 element, then fill those place with random numbers between 0 and 10

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int main() {

  vector<int> myvector;
  myvector.reserve(10);

  srand (time(NULL));
  for (unsigned int i = 0; i < myvector.capacity(); i++) {
    myvector.push_back(rand() % 11);
  }

  for (unsigned int i = 0; i < myvector.size(); i++) {
    cout << myvector[i] << " ";
  }

  return 0;
}
