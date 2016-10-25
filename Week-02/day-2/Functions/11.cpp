//============================================================================
// Name        : 11.cpp
// Author      : Ak0s
//============================================================================

// write a function that gets a string as an input
// and appends an 'a' character to its end

#include <iostream>
#include <string>

using namespace std;

void dog(string a) {
  a += "a";
  cout << "The hungarian word for dog is " << a << "!";
}

int main() {
  string k = "kuty";

  dog(k);

  return 0;
}
