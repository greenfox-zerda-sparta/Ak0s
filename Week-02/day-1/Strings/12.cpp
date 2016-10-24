//============================================================================
// Name        : 12.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 12
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int counter;
	string m = "Apple";
	//fill the m variable with its content 4 times

	for (counter = 1; counter < 4; counter++) {
		m += " Apple";
	}

	cout << "The string after filled its content 4 times: " << m;

	return 0;
}
