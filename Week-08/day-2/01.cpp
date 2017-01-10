//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Print the first 5 elements of the vector using iterators

#include <iostream>
#include <vector>

using namespace std;

int main() {
//CREATE VECTOR AND FILL IT FROM 0 TO 9
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
//PRINT OUT THE VECTOR WITH ITERATOR
  for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
    cout << *i << " ";
  }

  return 0;
}
