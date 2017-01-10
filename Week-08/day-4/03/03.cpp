//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int recursive_sum_of_digits(unsigned int n) {
  if (n == 0) {
    return 0;
  }

  return n % 10 + recursive_sum_of_digits(n / 10);
}

int main() {

  cout << recursive_sum_of_digits(12345678);

  return 0;
}
