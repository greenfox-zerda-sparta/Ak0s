//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// Open a file called "second-exercise.txt"
// Read the content of the file and print it to the terminal window

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream second_exercise("second-exercise.txt");
  string second_exercise_content;
  second_exercise >> second_exercise_content;

  cout << second_exercise_content;

  return 0;
}
