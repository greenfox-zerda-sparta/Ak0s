//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Please double all the elements, than print all of them

#include <iostream>
#include <string>

using namespace std;

int main() {
  int f[] = {3, 4, 5, 6, 7};

  for (int i = 0; i <= 4 ; i++)
    f[i] *= 2;

  cout << "The elements of 'f' are:";

  for (int i = 0; i < sizeof(f)/sizeof(int) ; i++) {
    cout << " " << f[i];
  }
  return 0;
}
