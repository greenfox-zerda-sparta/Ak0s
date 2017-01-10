//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).

#include <iostream>
#include <string>

using namespace std;

int bunny_ears_counter(int num_of_bunnies) {
  if (num_of_bunnies == 0) {
    return 0;
  }
  return 2 + bunny_ears_counter(num_of_bunnies - 1);
}

int main() {

  cout << bunny_ears_counter(10);

  return 0;
}
