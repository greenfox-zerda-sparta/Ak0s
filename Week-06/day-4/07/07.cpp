//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

//create a vector of integers with the size of 20
//fill this vector with random numbers from 0 to 10
//print the items of the vector
//remove the even numbers, then print the items again

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int main() {
  srand (time(NULL));
  vector<int> int_vector (20);

  for (unsigned int i = 0; i < int_vector.capacity(); i++) {
    int_vector[i] = rand() % 11;
  }

  for (unsigned int i = 0; i < int_vector.size(); i++) {
    cout << int_vector[i] << " ";
  }

  cout << endl;

  for (unsigned int i = 0; i < int_vector.size(); i++) {
    if (int_vector[i] % 2 == 0) {
      int_vector.erase(int_vector.begin() + i);
      i--;
    }
  }

  for (unsigned int i = 0; i < int_vector.size(); i++) {
    cout << int_vector[i] << " ";
  }

  return 0;
}
