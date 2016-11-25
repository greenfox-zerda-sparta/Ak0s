//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

//create a vector of integers with the size of 10, fill them with random numbers
//create a vector of doubles and reserve place for 10 items
//push and item to the end of the vector with the double places
//print which vectors size is higher (and why?)

#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

int main() {
  srand (time(NULL));
  vector<int> int_vector (10);

  for (unsigned int i = 0; i < int_vector.capacity(); i++) {
    int_vector[i] = rand();
  }

  vector<double> double_vector;
  double_vector.reserve(10);
  double_vector.push_back(rand());

  if (int_vector.size() > double_vector.size()) {
    cout << "The size of the integer vector is bigger! (" << int_vector.size() << " > " << double_vector.size() << ")" << endl << endl;
  }
  else if (int_vector.size() < double_vector.size()){
    cout << "The size of the double vector is bigger! (" << double_vector.size() << " > " << int_vector.size() << ")" << endl << endl;
  }
  else {
    cout << "The size of the vectors are equal! (" << double_vector.size() << " == " << int_vector.size() << ")" << endl << endl;
  }

  cout << "====================== WHY? ======================" << endl << endl;
  cout << "If we use reserve, it doesn't initialize the reversed spaces, so if we push one element, the size will be 1, not 10." << endl;
  cout << "However the capacity of the two vector is the same! Check this out: " << endl << endl;
  cout << "The capacity of the integer vector is: " << int_vector.capacity() << endl;
  cout << "The capacity of the double vector is: " << double_vector.capacity() << endl;



  return 0;
}
