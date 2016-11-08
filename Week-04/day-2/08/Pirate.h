//============================================================================
// Name        : 08.cpp - Pirate.h
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

using namespace std;

class Pirate {
  private:
    unsigned int counter = 0;
  public:
    void drink_rum();
    string hows_goin_mate();
};
