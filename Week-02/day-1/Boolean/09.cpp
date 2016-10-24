//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 09
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	long long int i = 1357988018575474;
	// tell if it has 11 as a divisor

	cout << "Is the 11 a divisor of 'i'?"<<endl;

	if ( i%11 == 0 ) {
			cout << "Yes, 11 is a divisor of 'i'!";
	}else {
			cout << "No, if we divide 'i' with 11 we get: " << i/11 << " with a remainder of: " << i%11;
	}

	return 0;
}
