//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared in the string

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> letter_counter(string str) {
  map<char, int> letter_counter;
  for (unsigned int i = 0; i < str.length(); i++) {
    letter_counter[str[i]] += 1;
  }
  return letter_counter;
}

template<typename T1,typename T2>
void print_map(map<T1, T2> input_map) {
  for (typename map<T1, T2>::iterator i = input_map.begin(); i != input_map.end(); i++) {
    cout << i->first << ": " << i->second << endl;
  }
}

int main() {

  print_map(letter_counter("penpinappleapplepen"));

  return 0;
}
