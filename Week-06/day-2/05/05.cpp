//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the character is not in the string throw an exception.

// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

#include <iostream>
#include <string>
using namespace std;


string* split(string whole_string, char character) throw(const char*){
  unsigned int char_counter, j = 0;
  for (unsigned int i = 0; i < whole_string.length(); i++) {
    if (whole_string[i] == character) {
      char_counter++;
    }
  }
  if (char_counter != 0) {
    string* splitted_string = new string[char_counter + 1];
    for (unsigned int i = 0; i < char_counter + 1; i++) {
      while (whole_string[j] != character && whole_string[j] != '\0') {
        splitted_string[i] += whole_string[j];
        j++;
      }
      j++;
    }
    return splitted_string;
  }
  else {
    throw "The given character isn't in the given string!";
  }
}

int main() {
  try {
    cout << "Function working:" << endl;
    for (int i = 0; i < 3; i++) {
      cout << "Returned array " << i+1 << ". element: " <<split("What the hack", ' ')[i] << endl;
    }
    cout << endl << endl << "Function throw exception:" << endl;
    for (int i = 0; i < 3; i++) {
      cout << "Returned array " << i+1 << ". element: " <<split("What the hack", 'y')[i] << endl;
    }
  }
  catch (const char* excp) {
    cout << "Error: " << excp;
  }
  return 0;
}
