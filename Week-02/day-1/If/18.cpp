//============================================================================
// Name        : 18.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 18
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string x = "monkey";
	// if the string is longer than 4 characters***
	// print 'Long!' otherwise print 'Short!'

	if ( x.length() > 4 ) {
		cout << "Long!";
	}else {
		cout << "Short!";
	}

	return 0;
}
