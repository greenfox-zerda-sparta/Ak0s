//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// Write this function so that it appends the variable addition to the other variable base.
// Base should be changed, addition should remain the same.

#include <iostream>
#include <string>
using namespace std;

void concatenate(string *base, string *addition);

int main(int argc, char** argv) {
	string a = "kuty";
	string b = "a es macska";

	concatenate(&a, &b);

	cout << "What's the result: " << a << endl;
	cout << "Did 'b' remain unchanged? " << b << endl;

}

void concatenate(string *base, string *addition) {
 *base += *addition;
}
