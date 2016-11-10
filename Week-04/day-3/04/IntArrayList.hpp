//============================================================================
// Name        : 04.cpp - IntArrayList.hpp
// Author      : Ak0s
//============================================================================

// Take the attached hpp and cpp files. Read them trough.
// Implement IntArrayList.
// Write code here in a main function that uses it and tests it in edge cases as well.

#include "IntList.hpp"

#ifndef INTARRAYLIST_H_
#define INTARRAYLIST_H_

class IntArrayList: public IntList {
  private:
    int* array;
    int mRealLength;
    unsigned int setRealLength();
  public:
    IntArrayList();
    void append(int value);
    void insert(unsigned int index, int value);
    int getFirst();
    int getLast();
    void printArray();
    ~IntArrayList();
};

#endif
