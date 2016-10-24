//============================================================================
// Name        : 11.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 11
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int k = 1521;
	// tell if k is dividable by 3 or 5

	cout << "Is 'k' dividable by 3 or 5?" << endl;

	if ( k%3 == 0 || k%5 == 0 ) {
		cout << "The number 'k' is dividable by 3 or 5!";
	}else {
		cout << "The number 'k' is NOT dividable by 3 or 5 without remainder!";
	}

	return 0;
}
