//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// write a recursive function
// that takes one parameter: n
// and counts down from n

#include <iostream>
#include <string>

using namespace std;

int recursive_count_down(int n) {
  cout << n << endl;
  if (n == 0) {
    return 0;
  }
  return recursive_count_down(n - 1);
}

int main() {

  recursive_count_down(5);

  return 0;
}
