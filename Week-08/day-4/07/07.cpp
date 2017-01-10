//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

#include <iostream>
#include <string>

using namespace std;

string swap_x_y(string str, unsigned int char_index = 0) {
  if (char_index == str.length()) {
    return str;
    }
  if (str[char_index] == 'x') {
    str[char_index] = 'y';
    return swap_x_y(str, char_index + 1);
  }
  else {
    return swap_x_y(str, char_index + 1);
  }
}

int main() {
  string str = "xanax";

  cout << swap_x_y(str);

  return 0;
}
