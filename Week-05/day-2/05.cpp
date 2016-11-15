//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Write a program that prints a content of a file called "fifth-exercise.txt"
// If it could not open the file it should write: "Could not open the file" to the standard error
// The program should return 2 if there where an error

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  ifstream fifth_exercise("fifth-exercise.txt");
  if (fifth_exercise.is_open()) {
    string fifth_exercise_content;
    stringstream buffer;
    buffer << fifth_exercise.rdbuf();
    fifth_exercise_content = buffer.str();
    cout << fifth_exercise_content;
    return 0;
  }
  else {
    cerr << "Could not open the file!";
    return 2;
  }
}
