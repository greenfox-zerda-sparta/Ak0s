//============================================================================
// Name        : 26.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 26
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;

	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".

//============================================================================
		cout << "Done with WHILE: " << endl;
		a = 1;
		while ( a <= 100 ) {
			if (a%3 == 0 && a%5 == 0) {
				cout << " FizzBuzz";
			}else if (a%3 == 0) {
				cout << " Fizz";
			}else if (a%5 == 0) {
				cout << " Buzz";
			}else {
				cout << " " << a;
			}
			a++;
		}
		cout << endl;
//============================================================================
		cout << "Done with DO-WHILE: " << endl;
		a = 1;
		do {
			if (a%3 == 0 && a%5 == 0) {
				cout << " FizzBuzz";
			}else if (a%3 == 0) {
				cout << " Fizz";
			}else if (a%5 == 0) {
				cout << " Buzz";
			}else {
				cout << " " << a;
			}
			a++;
		} while ( a <= 100 );
		cout << endl;
//============================================================================
		cout << "Done with FOR: " << endl;
		for (a = 1; a <= 100; a++ ){
			if (a%3 == 0 && a%5 == 0) {
				cout << " FizzBuzz";
			}else if (a%3 == 0) {
				cout << " Fizz";
			}else if (a%5 == 0) {
				cout << " Buzz";
			}else {
				cout << " " << a;
			}
		}
		cout << endl;
//============================================================================

	return 0;
}
