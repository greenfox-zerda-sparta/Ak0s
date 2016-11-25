//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

//create a vector of doubles with the size of 30, with every element equal of 1.5
//create functions that takes this vector, pick the last element of it and adding its value to
//an other item from the vector(this item place is random) and remove the last element at the end
//run this function 20 times, then print every element of the vector

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

void rand_addition_and_pop(vector<double>& _myvector);

int main() {
  unsigned int vector_size = 30;
  vector<double> double_vector (vector_size);

  for (unsigned int i = 0; i <= vector_size; i++) {
    double_vector[i] = 1.5;
  }

  for (unsigned int i = 0; i < 20; i++) {
    rand_addition_and_pop(double_vector);
  }

  vector_size = double_vector.size();

  for (unsigned int i = 0; i < vector_size; i++) {
    cout << double_vector[i] << " ";
  }

  return 0;
}

void rand_addition_and_pop(vector<double>& _myvector) {
  srand (time(NULL));
  _myvector[rand() % _myvector.size()] += _myvector[_myvector.size()];
  _myvector.pop_back();
}
