//============================================================================
// Name        : 04.cpp - WordToolbox.cpp
// Author      : Ak0s
//============================================================================

#include "WordToolbox.hpp"

WordToolbox::WordToolbox(std::string stringHeld) {
  this->stringHeld = convertToLowerCase(stringHeld);
}

std::string WordToolbox::get_stringHeld() {
  return stringHeld;
}

void WordToolbox::set_stringHeld(std::string s) {
  stringHeld = s;
}

bool WordToolbox::isAnAnagram(std::string stringToCheck) {
  std::sort(stringHeld.begin(), stringHeld.end());
  std::sort(stringToCheck.begin(), stringToCheck.end());
  return stringHeld == stringToCheck;
}

int WordToolbox::countHowMany(char charToFind) {
  if (std::count(stringHeld.begin(), stringHeld.end(), tolower(charToFind)) == 0) {
    throw "Error: this character is not included in the string!";
  } else {
  return static_cast<int>(std::count(stringHeld.begin(), stringHeld.end(), tolower(charToFind)));
  }
}

std::string WordToolbox::convertToLowerCase(std::string str) {
  std::string new_str = "";
  for (unsigned int i = 0; i < str.size(); i++){
    new_str += tolower(str[i]);
  }
  return new_str;
}

