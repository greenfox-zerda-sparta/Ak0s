//============================================================================
// Name        : 04.cpp - WordToolbox.hpp
// Author      : Ak0s
//============================================================================

#ifndef WordToolbox_hpp
#define WordToolbox_hpp

#include <iostream>
#include <algorithm>

class WordToolbox {
private:
  std::string stringHeld;
public:
  WordToolbox(std::string stringHeld);
  std::string get_stringHeld();
  void set_stringHeld(std::string s);
  bool isAnAnagram(std::string stringToCheck);
  int countHowMany(char charToFind);
  std::string convertToLowerCase(std::string str);
};

#endif /* WordToolbox_hpp */
