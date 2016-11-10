//============================================================================
// Name        : 04.cpp - IntArrayList.cpp
// Author      : Ak0s
//============================================================================

// Take the attached hpp and cpp files. Read them trough.
// Implement IntArrayList.
// Write code here in a main function that uses it and tests it in edge cases as well.

#include <iostream>
#include "IntList.hpp"
#include "IntArrayList.hpp"
using namespace std;

IntArrayList::IntArrayList() {
  mRealLength = 100;
  array = new int[mRealLength];
  }

void IntArrayList::append(int value) {
  if (getLength() > 0.9 * mRealLength) {
    int* new_array = new int[setRealLength()];

    for (unsigned int i = 0; i < getLength(); i++) {
      new_array[i] = array[i];
    }

    setLength();
    new_array[getLength() - 1] = value;
    delete[] array;
    array = new_array;
  }
  else {
    setLength();
    array[getLength() - 1] = value;
  }
}

void IntArrayList::insert(unsigned int index, int value) {
  if (!isEmpty()) {
    if (index < getLength()) {
      if (getLength() > 0.9 * mRealLength) {
        int* new_array = new int[getLength() + 1];
        for (unsigned int i = 0; i < index; i++) {
          new_array[i] = array[i];
        }

        new_array[index] = value;

        for (unsigned int i = index + 1; i < getLength() + 1; i++) {
          new_array[i] = array[i - 1];
        }

        setLength();
        delete[] array;
        array = new_array;
      }
      else {

        for (unsigned int i = getLength() + 1; i > index; i--) {
          array[i] = array[i - 1];
        }

        array[index] = value;
        setLength();
      }
    }
    else {
      cout << "Failed to insert! The " << index << ". index is out of the array! Give an index between or equal to 0 and " << getLength() - 1 << "!" << endl;
    }
  }
  else if (isEmpty() && index == 0) {
    array[0] = value;
    setLength();
  }
  else {
    cout << "Failed to insert " << value << " to the " << index + 1 << ". place, because the array is empty. Append elements before you try to insert anything!" << endl;
  }
}

int IntArrayList::getFirst() {
  if (getLength() > 0) {
    return array[0];
  }
  else {
    cout << "The array is empty! Append elements first!" << endl;
    return -1;
  }
}

int IntArrayList::getLast() {
  if (getLength() != 0) {
    return array[getLength() - 1];
  }
  else {
    cout << "The array is empty! Append elements first!" << endl;
    return -1;
  }
}

void IntArrayList::printArray() {
  for (unsigned int i = 0; i < getLength(); i++) {
    cout << array[i] << "   ";
  }
  cout << endl;
}

unsigned int IntArrayList::setRealLength() {
  return mRealLength = 2 * mRealLength;
}

IntArrayList::~IntArrayList() {
  delete[] array;
}
