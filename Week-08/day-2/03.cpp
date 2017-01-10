//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// Print all the keys and values of the map

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, int> m;
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  m["four"] = 4;
  m["five"] = 5;

  for (map<string, int>::iterator i = m.begin(); i != m.end(); i++) {
    cout << i->first << ": " << i->second << endl;
  }
  return 0;
}
