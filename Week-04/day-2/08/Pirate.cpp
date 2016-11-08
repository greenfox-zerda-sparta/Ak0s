//============================================================================
// Name        : 08.cpp - Pirate.cpp
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

void Pirate::drink_rum() {
  this->counter++;
}

string Pirate::hows_goin_mate() {
  string is_drunk;
  if (this->counter < 5) {
    is_drunk = "Nothin'";
  }
  else {
    is_drunk = "Arrrr!";
  }
  return is_drunk;
}
