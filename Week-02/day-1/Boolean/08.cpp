//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 08
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int h1 = 350;
	int h2 = 200;
	// tell if the double of h2 is bigger than h1

	cout << "Is the double of 'h2' bigger than 'h1'?"<<endl;

	if ( h2*2 > h1 ) {
		cout << "Yes, the double of 'h2' is bigger than 'h1'!";
	}else {
		cout << "No, 'h1' is still the bigger one!";
	}

	return 0;
	}
