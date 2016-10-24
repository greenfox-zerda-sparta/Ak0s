//============================================================================
// Name        : 10.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 10
//============================================================================

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed

	cout << "Is 'j1' higher than 'j2' squared and smaller than 'j2' cubed?" << endl;

	if ( j1 > pow(j2,2) && j1 < pow(j2,3) ) {
		cout << "The number 'j1' is higher than 'j2' squared, but smaller than 'j2' cubed!";
	}else {
		cout << "The number 'j1' isn't higher than 'j2' squared, or smaller than 'j2' cubed!";
	}

	return 0;
}
