//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// Write a function that takes two int pointers and swaps the values where the pointers point

#include <iostream>
using namespace std;

void swap(int a, int b);

int main() {
  int first = 12;
  int second = 54;

  int* pfirst = &first;
  int* psecond = &second;

  cout << "Memory addresses of pointers before swap:" << endl;
  cout << "pfirst: " << pfirst << endl;
  cout << "psecond: " << psecond << endl << endl;

  swap(pfirst,psecond);

  cout << "Memory addresses of pointers before swap:" << endl;
  cout << "pfirst: " << pfirst << endl;
  cout << "psecond: " << psecond << endl;

  return 0;
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
