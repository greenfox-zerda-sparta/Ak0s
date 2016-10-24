//============================================================================
// Name        : 21.cpp
// Author      : Ak0s
// Description : GFA - C++, Exercise 21
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int ab = 123;
	int credits = 100;
	bool is_bonus = 0;
	// if credits are at least 50,
	// and is_bonus is False decrement ab by 2
	// if credits are smaller than 50,
	// and is_bonus is False decrement ab by 1
	// if is_bonus is True ab should remain the same

	if ( credits >= 50 && is_bonus == 0 ) {
		ab -= 2;
	}else if ( credits < 50 && is_bonus == 0) {
		ab--;
	}
	return 0;
}
