//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// Given a string, compute recursively a new string where all the 'x' chars have been removed.

#include <iostream>
#include <string>

using namespace std;

string delete_all_x(string str, unsigned int char_index = 0) {
  if (char_index == str.length()) {
    return str;
    }
  if (str[char_index] == 'x') {
    str.erase(str.begin()+char_index);
    return delete_all_x(str, char_index);
  }
  else {
    return delete_all_x(str, char_index + 1);
  }
}

int main() {

  string str = "xanax";


  cout << delete_all_x(str);

  return 0;
}
