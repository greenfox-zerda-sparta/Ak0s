//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#include <iostream>
using namespace std;


#define __DEBUG
#ifdef __DEBUG
  #define print_param(a) {cout << "DEBUG: " << a;}
#else
  #define print_param(a) {cout << "RELEASE: " << a;}
#endif


int main() {

  int a = 3;
  print_param(a);

  return 0;
}
