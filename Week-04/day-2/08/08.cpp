//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// create a pirate class
// it should have 2 methods
// drink_rum()
// hows_goin_mate()
// if the drink_rum was called at least 5 times:
// hows_goin_mate should return "Arrrr!"
// "Nothin'" otherwise

#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
  unsigned int rums;
  Pirate Gankplank;

  cout << "Number of rum drank by the pirate!" << endl;
  cin >> rums;

  for (unsigned int i = 0; i < rums; i++)
    Gankplank.drink_rum();

  cout << "Pirate says: " << Gankplank.hows_goin_mate();

  return 0;
}
