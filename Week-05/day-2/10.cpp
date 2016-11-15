//============================================================================
// Name        : 10.cpp
// Author      : Ak0s
//============================================================================

// Create a program that decrypts the file called "reversed-lines.txt",
// and prints the decrypted text to the terminal window.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void decrypt_reversed_lines(string filename);

int main() {

  decrypt_reversed_lines("reversed-lines.txt");



  return 0;
}

void decrypt_reversed_lines(string filename) {
  ifstream file(filename);
  if (file.is_open()) {
    string content;
    while (getline(file, content)) {
    cout << string(content.rbegin(), content.rend()) << endl;
    }
  }
  else {
    cerr << "Could not open the source file!";
  }
}


