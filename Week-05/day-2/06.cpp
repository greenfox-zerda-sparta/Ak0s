//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Write a function that reads the content of a file and returns it as a string
// It should take the filename as a string parameter

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string read_from_file(string filename);

int main() {
  cout << read_from_file("sixth-exercise.txt");
  return 0;
}

string read_from_file(string filename) {
  ifstream file(filename);
  if (file.is_open()) {
    string content;
    stringstream buffer;
    buffer << file.rdbuf();
    content = buffer.str();
    return content;
  }
  else {
    return "Could not open the file! Check for typos!";
  }
}
