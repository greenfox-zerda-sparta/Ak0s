//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// print the sum of all numbers in h

#include <iostream>
#include <string>

using namespace std;

int main() {
  int sum;
  int h[] = {3, 4, 5, 6, 7};

  for (int i = 0; i < sizeof(h)/sizeof(int) ; i++) {
  		    sum += h[i];
  }

  cout << "The sum of 'h' is: " << sum;

  return 0;
}
