//============================================================================
// Name        : 07.cpp
// Author      : Ak0s
//============================================================================

// Tell if g1 is stored in more bytes than g2

#include <iostream>
#include <string>

using namespace std;

int main() {
  char g1 = 'a';
  double g2 = 12.345;

  if ( sizeof(g1) > sizeof(g2) ) {
    cout << "The 'g1' variable stored in MORE bytes than 'g2' variable!";
  }
  else {
    cout << "The 'g1' variable stored in LESS bytes than 'g2' variable!";
  }
  return 0;
}
