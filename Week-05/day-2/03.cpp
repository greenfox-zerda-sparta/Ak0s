//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// Open a file called "third-exercise.txt"
// Write numbers from 0 to 20 into the file each in a new line

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ofstream numbers("third-exercise.txt");
  for (int i = 0; i <= 20; i++) {
    numbers << to_string(i) + "\n";
  }
  numbers.close();

  return 0;
}
