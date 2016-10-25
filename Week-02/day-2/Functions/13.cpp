//============================================================================
// Name        : 13.cpp
// Author      : Ak0s
//============================================================================

// create a function that returns it's input factorial

#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
  if (n == 1){
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}

int main() {
  int num;
  cout << "You wish to know the factorial of which number?" << endl;
  cin >> num;
  cout << num << "! is equal to " << factorial(num) << ".";
  return 0;
}
