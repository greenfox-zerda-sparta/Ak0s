//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Take the attached hpp and cpp files. Read them trough.
// Implement IntArrayList.
// Write code here in a main function that uses it and tests it in edge cases as well.

#include <iostream>
#include "IntList.hpp"
#include "IntArrayList.hpp"
using namespace std;

int main() {
  IntList* array_list = new IntArrayList;

  // Adding elements to the array_list:

  array_list->append(1);
  array_list->append(3);
  array_list->append(5);
  array_list->append(7);

  array_list->insert(1,4);

  // Print out the array_list we made above:
  cout << "Elements of the array_list are: " << endl;
  ((IntArrayList*)array_list)->printArray();
  cout << endl;

  // Test function getFrist, getLast, getLength by printing out their returned value:
  cout << "First element of the array_list is: " << array_list->getFirst() << endl
       << "Last element of the array_list is: " << array_list->getLast() << endl
       << "The length of the array_list is: " << array_list->getLength() << endl;

  // Delete the allocated memory:
  delete array_list;
  return 0;
}
