//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// Create a function that takes a number and prints a diamond like this:
//
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//
// The diamond should have as many lines as the value in the argument

#include <iostream>
using namespace std;

void diamond(int number);

int main() {
  int number;

  cout << "The program prints a diamond made of *-s. How many rows do you want?" << endl;
  cin >> number;

  diamond(number);

  system("PAUSE");
  return 0;
}

void diamond(int number) {
  int i, j, k;

  k = number - 1;

  for (i = 1; i <= number; i++) {
    for (j = 1; j <= k; j++) {
	  cout << " ";
    }
	k--;
    for (j = 1; j <= 2*i-1; j++) {
	  cout << "*";
    }
	cout << endl;
  }

  k = 1;

  for (i = 1; i <= number-1; i++) {
    for (j = 1; j <= k; j++) {
      cout<<" ";
    }
	k++;

  for (j = 1 ; j <= 2*(number-i)-1; j++) {
    cout << "*";
  }
  cout<< endl;
  }
}


