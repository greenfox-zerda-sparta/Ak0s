//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Open a file called "first-exercise.txt"
// Write your name in it as a single line

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ofstream name("first-exercise.txt");
  name << "Ak0s";
  name.close();

  return 0;
}
