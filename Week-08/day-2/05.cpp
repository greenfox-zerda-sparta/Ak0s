//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> get_names_from_user();
map<string, string> santa_pairs_generator(vector<string> names);
void print_result(map<string, string> santa_pairs);

int main() {
  print_result(santa_pairs_generator(get_names_from_user()));
  return 0;
}

vector<string> get_names_from_user() {
  vector<string> names;
  string input;
  cout << "Add names: ";
  while (cin >> input && input != "q") {
    names.push_back(input);
  }
  random_shuffle(names.begin(), names.end());
  return names;
}

map<string, string> santa_pairs_generator(vector<string> names) {
  try {
    map<string, string> santa_pairs;
    if (names.size() > 1) {
      for (unsigned int i = 0; i < names.size() - 1; i++) {
        santa_pairs[names[i]] = names[i + 1];
      }
      santa_pairs[names[names.size() - 1]] = names[0];
      return santa_pairs;
    }
    else {
      throw "You need to add at least 2 people to generate pairs!\n";
    }
  }
  catch (const char* excp) {
    cout << excp;
    return santa_pairs_generator(get_names_from_user());
  }
}

void print_result(map<string, string> santa_pairs) {
  cout << "==================================" << endl
       << "The random Secret Santa pairs are:" << endl
       << "==================================" << endl;

  for (map<string, string>::iterator i = santa_pairs.begin(); i != santa_pairs.end(); i++) {
    cout << i->first << " - " << i->second << endl;
  }
}
