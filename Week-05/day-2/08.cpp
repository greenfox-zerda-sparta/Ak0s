//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// Write a function that copies a file to an other
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

bool copy_file(string from, string to);

int main() {

  copy_file("copy_from.txt", "copy_to.txt");

  return 0;
}

bool copy_file(string copy_from, string copy_to) {
  ifstream file(copy_from);
  if (file.is_open()) {
    string content;
    stringstream buffer;
    buffer << file.rdbuf();
    content = buffer.str();

    ofstream file(copy_to);
    file << content;
    file.close();
    return true;
  }
  else {
    cout << "Could not find the source file! Check for typos!";
    return false;
  }
}
