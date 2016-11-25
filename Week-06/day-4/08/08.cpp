//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

//create a vector of characters with the size of 8
//ask the user to fill this vector with characters one by one
//at the end make sure the vector holds the letters of "GREENFOX"
//so correct the user if he/she gives a different letter from the one we want them to give :)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void push_char(vector<char>& _myvector, unsigned int progress = 0);

int main() {
  vector<char> gfa_vector;

  cout << "You have to add characters to this vector!" << endl;
  push_char(gfa_vector);

  cout << endl << "ACCIDENTALLY the characters you typed in gives a valid word: ";
  for (unsigned int i = 0; i < gfa_vector.size(); i++) {
    cout << gfa_vector[i];
  }
  return 0;
}

void push_char(vector<char>& _myvector, unsigned int progress) {
  string gfa = "GREENFOX";
  char input;
  try {
    while (progress < gfa.length()) {
      cout << "Enter the " << progress + 1 << ". character you want to add to the vector: ";
      cin >> input;
      cout << endl;
      if (input == gfa[progress]) {
        _myvector.push_back(input);
        progress++;
      }
      else {
        throw gfa[progress];
      }
    }
  }
  catch (char excp) {
    cout << endl << "=======================================================================================" << endl
                 << "Don't give nonsense characters!" << endl
                 << "The only thing make sense if you give the characters of: " << gfa << endl
                 << "The character you might wanted to add before is: " << excp << endl
                 << "Let's try again!" << endl
                 << "=======================================================================================" << endl << endl;
    return push_char(_myvector, progress);
  }
}
