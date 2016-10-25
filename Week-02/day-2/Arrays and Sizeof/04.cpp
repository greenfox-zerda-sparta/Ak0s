//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// change 8 to 4, than print all the elements of the array

#include <iostream>
#include <string>

using namespace std;

int main() {
  int d[] = {1, 2, 3, 8, 5, 6};
  d[3] = 4;

  cout << "The elements of 'd' are:";

  for (int i = 0; i < sizeof(d)/sizeof(int) ; i++)
    cout << " " << d[i];

  return 0;
}
