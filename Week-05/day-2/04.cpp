//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Open a file called "fourth-exercise.txt"
// Print all of its lines to the terminal window

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {

  ifstream fourth_exercise("fourth-exercise.txt");
  string fourth_exercise_content;
  stringstream buffer;
  buffer << fourth_exercise.rdbuf();
  fourth_exercise_content = buffer.str();

  cout << fourth_exercise_content;

  return 0;
}
