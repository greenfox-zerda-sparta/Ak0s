//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

//create a vector of chars with the size of zero;
//write a function where the user can add characters to the end of this vector

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void push_char(vector<char>& _myvector);

int main() {

  vector<char> myvector;
  push_char(myvector);

  return 0;
}

void push_char(vector<char>& _myvector) {
  unsigned int num_of_char;
  char input;

  cout << "How many characters do you want to add?" << endl;
  cin >> num_of_char;

  cout << "Enter the character(s) you want to add to the end of the vector: ";

  for (unsigned int i = 0; i < num_of_char; i++) {
    cin >> input;
    _myvector.push_back(input);
  }
}
