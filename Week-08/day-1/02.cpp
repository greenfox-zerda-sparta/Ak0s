//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// Create a constant using a prepocessor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#include <iostream>
using namespace std;

#define EXAMPLE 13

int main() {

// PRINT EXAMPLE AFTER DEFINING IT
	cout << EXAMPLE << endl;

// PRINT EXAMPLE AFTER UNDEFINING AND REDEFINING IT
  #undef EXAMPLE
  #define EXAMPLE "It's not 13 now!"
  cout << EXAMPLE << endl;

	return 0;
}
