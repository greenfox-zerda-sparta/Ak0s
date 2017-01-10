//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#include <iostream>
using namespace std;

#define print(a) {cout << a;}

int main() {

  print("TEXT");

	return 0;
}
