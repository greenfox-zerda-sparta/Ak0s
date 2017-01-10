//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "VectorMath.hpp"

TEST_CASE("VectorMath testing") {
  VectorMath vec;
  std::vector<int> test_vec = {10, 42};
  REQUIRE(vec.get_sum_of_vector(test_vec) == 52);
}
