//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n

#include <iostream>
#include <string>

using namespace std;

int recursive_add_up(int n) {
  if (n == 0) {
    return 0;
  }
  return n + recursive_add_up(n - 1);
}

int main() {

  cout << recursive_add_up(8);

  return 0;
}
