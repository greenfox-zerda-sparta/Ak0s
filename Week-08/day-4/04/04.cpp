//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

#include <iostream>
#include <string>

using namespace std;

int recursive_power(unsigned int base, unsigned int power) {
  if (power == 0) {
    return 1;
  }
  return base * recursive_power(base,power - 1);
}

int main() {

  cout << recursive_power(3,2);

  return 0;
}
