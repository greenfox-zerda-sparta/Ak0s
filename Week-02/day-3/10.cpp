//============================================================================
// Name        : 10.cpp
// Author      : Ak0s
//============================================================================

//Implement this function to create and return a new string
//which contains the two parts concatenated.

#include <iostream>
#include <string>
using namespace std;

string safeConcat(string part1, string part2);

int main(int argc, char** argv) {
  string a = "kutya";
  string b = " es macska";
  string c = safeConcat(a, b);
  cout << "\"a\": " << a << endl;
  cout << "\"b\": " << b << endl;
  cout << "\"c\": " << c<< endl;
  return 0;
}

string safeConcat(string part1, string part2) {
  return part1 + part2;
}
