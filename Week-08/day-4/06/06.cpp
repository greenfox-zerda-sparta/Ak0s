//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or
// multiplication).

#include <iostream>
#include <string>

using namespace std;

int bunny_ears_counter(int num_of_bunnies) {
  if (num_of_bunnies == 0) {
    return 0;
  }
  if (num_of_bunnies % 2 == 1) {
    return 2 + bunny_ears_counter(num_of_bunnies - 1);
  }
  else {
    return 3 + bunny_ears_counter(num_of_bunnies - 1);
  }
}

int main() {

  cout << bunny_ears_counter(5);

  return 0;
}
