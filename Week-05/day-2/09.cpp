//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// Create a program that decrypts the file called "duplicated-chars.txt",
// and prints the decrypted text to the terminal window.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void decrypt_duplicated_chars(string filename);

int main() {

  decrypt_duplicated_chars("duplicated-chars.txt");

  return 0;
}

void decrypt_duplicated_chars(string filename) {
  ifstream file(filename);
  if (file.is_open()) {
    string content;
    stringstream buffer;
    buffer << file.rdbuf();
    content = buffer.str();
    for (unsigned int i = 0; i < content.length(); i += 2) {
      cout << content[i];
    }
  }
  else {
    cerr << "Could not open the source file!";
  }
}
