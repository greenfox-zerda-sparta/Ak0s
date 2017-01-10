//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// create a function that prints a vector using iterators

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_vector(vector<T> v) {
  for (typename vector<T>::iterator i = v.begin(); i != v.end(); i++) {
    cout << *i << " ";
  }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  print_vector(v);

  return 0;
}
