//============================================================================
// Name        : 24.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 24
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	int ae = 4;
	string text = "Gold";
	// print content of the text variable ae times

//============================================================================
	cout << "Done with WHILE: ";
	a = 1;
	while ( a <= ae ) {
		cout << " " << text;
		a++;
	}
	cout << endl;
//============================================================================
	cout << "Done with DO-WHILE: ";
	a = 1;
	do {
		cout << " " << text;
		++a;
	} while ( a <= ae );
	cout << endl;
//============================================================================
	cout << "Done with FOR: ";
	for (a = 1; a <= ae; a++ ){
		cout << " " << text;
	}
	cout << endl;
//============================================================================
	return 0;
}
