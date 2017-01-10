//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".

#include <iostream>
#include <string>

using namespace std;

string adjacent_transformer(string str, unsigned int char_index = 0) {
  if (char_index == str.length() - 1) {
    return str;
    }
  if (str[char_index] == str[char_index + 1]) {
    str.insert(char_index + 1, "*");
    return adjacent_transformer(str, char_index);
  }
  else {
    return adjacent_transformer(str, char_index + 1);
  }
}

int main() {

  cout << adjacent_transformer("aabbcc");

  return 0;
}
