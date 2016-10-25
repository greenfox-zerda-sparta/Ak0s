//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// create a function that takes a string argument and greets it.

#include <iostream>
#include <string>

using namespace std;

void greet(string a) {
  cout << "Hello, " << a << "!";
}

int main() {
  string i = "Jozsi";

  greet(i);

  return 0;
}

