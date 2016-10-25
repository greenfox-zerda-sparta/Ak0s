//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// print all the elements of the array

#include <iostream>
#include <string>

using namespace std;

int main() {
  int d[] = {6, 5, 4, 3, 2, 1};

  cout << "The elements of 'd' are:";

  for (int i = 0; i < sizeof(d)/sizeof(int) ; i++)
    cout << " " << d[i];

  return 0;
}
