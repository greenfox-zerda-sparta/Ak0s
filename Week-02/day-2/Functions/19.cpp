//============================================================================
// Name        : 19.cpp
// Author      : Ak0s
//============================================================================

// create a function that decides if a number is a prime number.
// It should take a number as an argument and return true if it is prime and
// false otherwise.

#include <iostream>
using namespace std;

int prime(int number) {
  bool primeornot = 1;

  for (int i = 2; i <= number/2; i++) {
    if (number%i == 0) {
      primeornot = false;
      break;
    }
  }
  return primeornot;
}

int main(){
  int number = 121;

  if (prime(number) == 1) {
    cout << "It is a prime number!";
  }
  else {
	cout << "It isn't a prime number!";
  }
  return 0;
}
