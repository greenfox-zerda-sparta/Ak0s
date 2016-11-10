//============================================================================
// Name        : 04.cpp - IntList.hpp
// Author      : Ak0s
//============================================================================

// Take the attached hpp and cpp files. Read them trough.
// Implement IntArrayList.
// Write code here in a main function that uses it and tests it in edge cases as well.

#ifndef INT_LIST_HPP
#define INT_LIST_HPP

class IntList {
  private:
    unsigned int mLength;
  public:
    IntList();
    virtual void append(int value) = 0;
    virtual void insert(unsigned int index, int value) = 0;
    virtual int getFirst() = 0;
    virtual int getLast() = 0;
    virtual ~IntList();
    unsigned int getLength();
    unsigned int setLength();
    bool isEmpty();
};

#endif
