//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

#define CATCH_CONFIG_MAIN

#include <iostream>
#include <string>
#include <vector>
#include "catch.hpp"

using namespace std;

int fibonacci_by_index(unsigned int i) {
  vector<unsigned int> fibonacci_vector;
  if (i == 0) {
    return 0;
  }
  if (i == 1) {
    return 1;
  }
  else {
    return fibonacci_by_index(i - 1) + fibonacci_by_index(i - 2);
  }
}

TEST_CASE("Fibonacci element finder test") {
  REQUIRE(fibonacci_by_index(2) == 1);
  REQUIRE(fibonacci_by_index(5) == 5);
  REQUIRE(fibonacci_by_index(7) == 13);
  REQUIRE(fibonacci_by_index(13) == 233);
}
