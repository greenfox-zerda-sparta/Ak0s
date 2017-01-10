//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "Apple.hpp"
#include "catch.hpp"

using namespace std;

TEST_CASE("First exercise") {
  Apple apple;
  REQUIRE(apple.get_apple() == "Apple");
}
