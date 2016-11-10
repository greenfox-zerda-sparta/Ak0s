//============================================================================
// Name        : 04.cpp - IntList.cpp
// Author      : Ak0s
//============================================================================

// Take the attached hpp and cpp files. Read them trough.
// Implement IntArrayList.
// Write code here in a main function that uses it and tests it in edge cases as well.

#include <iostream>
#include "IntList.hpp"

using namespace std;

IntList::IntList() {
  mLength = 0;
}

unsigned int IntList::getLength() {
  return mLength;
}

unsigned int IntList::setLength() {
  return mLength++;
}

bool IntList::isEmpty() {
  return mLength == 0;
}

IntList::~IntList() {}


