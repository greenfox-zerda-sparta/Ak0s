//============================================================================
// Name        : 12.cpp
// Author      : Ak0s
//============================================================================

// Implement a function that takes a string as an argument and converts it to a floating point number

#include <iostream>
#include <string>
using namespace std;

float converter(string a, float& converted_number);

int main() {
  string number = "-2.4";
  float converted_number;

  converter(number,converted_number);
  cout << converted_number / 2 << endl;

  return 0;
}

float converter(string a, float& converted_number) {
  converted_number = stof(a);
  return converted_number;
}

