/*
 * VectorMath.hpp
 *
 *  Created on: 2016 dec. 19
 *      Author: Ak0s-Dell
 */

#ifndef VECTORMATH_HPP_
#define VECTORMATH_HPP_

#include <iostream>
#include <vector>

class VectorMath {
public:
  VectorMath() {}
  ~VectorMath() {}
  int get_sum_of_vector(std::vector<int>& vec) {
    int sum = 0;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
      sum += *it;
    }
    return sum;
  }
};

#endif /* VECTORMATH_HPP_ */
