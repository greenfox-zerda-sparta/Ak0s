//============================================================================
// Name        : 11.cpp
// Author      : Ak0s
//============================================================================

// Create a program that decrypts the file called "reversed-order.txt",
// and prints the decrypred text to the terminal window.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void decrypt_reversed_order(string filename);
int count_lines(string content);

int main() {

  decrypt_reversed_order("reversed-order.txt");

  return 0;
}

void decrypt_reversed_order(string filename) {
  ifstream file(filename);
  if (file.is_open()) {
    string lines[count_lines(filename)];
    for (int i = 0; i < count_lines(filename); i++) {
      getline(file, lines[i]);
    }
    for (int i = count_lines(filename) - 1; i >= 0; i--) {
      cout << lines[i] << endl;
    }
  }
  else {
    cerr << "Could not open the source file!";
  }
}

int count_lines(string filename) {
  int number_of_lines = 0;
  string line;
  ifstream myfile(filename);
  while (myfile.good()) {
    getline(myfile, line);
    number_of_lines++;
  }
  return number_of_lines;
}

