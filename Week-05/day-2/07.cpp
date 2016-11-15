//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// Write a function that writes a string to a file
// It should take the filename and the content as a string parameter

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_to_file(string filename, string content);

int main() {
  write_to_file("apple.txt","PPAP: I have a peeeeeen, I have an appleeeeeeeee..... Ugh, APPLE-PEN!");
  return 0;
}

void write_to_file(string filename, string content) {
  ofstream file(filename);
  file << content;
  file.close();
}
