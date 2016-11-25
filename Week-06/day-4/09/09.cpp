//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

//create a vector of vector of integers, yeah a vector that holds vectors of integers
//the inner vectors have 5 integers, all of them 0
//the outer vector is holding 5 vector at the beginning
//create a function that will add a new vector of integers to the end of our outer vector

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_vector(vector<vector<int>>& _myvector);

int main() {
  vector<vector<int>> outer_vector(5, vector<int>(5));

  add_vector(outer_vector);

  for (unsigned int i = 0; i < outer_vector.size(); i++) {
    for (unsigned int j = 0; j < 5; j++) {
      cout << outer_vector[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

void add_vector(vector<vector<int>>& _myvector) {
  _myvector.push_back(vector<int>(5));
}
