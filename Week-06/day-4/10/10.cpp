//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

//find how much integer divisor 2400 has
//create a vector of doubles, reserve place for the divisors of 2400
//fill this places with random numbers from 0 to 2400
//sort them in ascending order

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int main() {

  unsigned int divisor_counter, number = 2400;

  for (unsigned int i = 1; i < number / 2; i++) {
    if (number % i == 0) {
      divisor_counter++;
    }
  }

  vector<double> divisors;
  divisors.reserve(divisor_counter);

  srand (time(NULL));
  for (unsigned int i = 0; i < divisors.capacity(); i++) {
    divisors.push_back(rand() % 2401);
  }

  for(unsigned int i = 0; i < divisors.size(); i++) {
    for(unsigned int j = 0; j < divisors.size() - i; j++) {
      if(divisors[j] > divisors[j + 1]) {
        int temp = divisors[j];
        divisors[j] = divisors[j + 1];
        divisors[j + 1] = temp;
      }
    }
  }

  for (unsigned int i = 0; i < divisors.size(); i++) {
    cout << divisors[i] << " ";
  }


  return 0;
}
