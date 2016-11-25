//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

//create a vector of vector of integers
//the inner vectors have 5 integers, all of them 0
//the outer vector is holding 5 vector
//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increment_inner_elements(vector<vector<int>>& _myvector, unsigned int index_of_inner_vector);

int main() {
  vector<vector<int>> outer_vector(5, vector<int>(5));

// PRINT BEFORE INCREMENTATION:
  for (unsigned int i = 0; i < outer_vector.size(); i++) {
    for (unsigned int j = 0; j < outer_vector[i].size(); j++) {
      cout << outer_vector[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

// PRINT AFTER INCREMENTATION:
  increment_inner_elements(outer_vector, 2);
  for (unsigned int i = 0; i < outer_vector.size(); i++) {
    for (unsigned int j = 0; j < outer_vector[i].size(); j++) {
      cout << outer_vector[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

void increment_inner_elements(vector<vector<int>>& _myvector, unsigned int index_of_inner_vector) {
  for (unsigned int j = 0; j < _myvector[index_of_inner_vector].size(); j++) {
    _myvector[index_of_inner_vector][j]++;
  }
}
