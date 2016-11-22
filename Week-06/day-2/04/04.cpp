//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.

// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

#include <iostream>
#include <string>
using namespace std;

string* split(string whole_string, unsigned int index) throw(const char*){
  if (whole_string.length() > index) {
    string* splitted_string = new string[2];
    for (unsigned int i = 0; i < index; i++) {
      splitted_string[0] += whole_string[i];
    }
    for (unsigned int i = index; i < whole_string.length(); i++) {
      splitted_string[1] += whole_string[i];
    }
    return splitted_string;
  }
  else {
    throw "Index is out of bound!";
  }
}

int main() {
  try {
    cout << "Function working:" << endl;
    for (int i = 0; i < 2; i++) {
      cout << split("Rebarbara", 2)[i] << " ";
    }
    cout << endl << endl << "Function throw exception:" << endl;
    for (int i = 0; i < 2; i++) {
      cout << split("Rebarbara", 9)[i] << " ";
    }
  }
  catch (const char* excp) {
    cout << "Error: " << excp;
  }
  return 0;
}

