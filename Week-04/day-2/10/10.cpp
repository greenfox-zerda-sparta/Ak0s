//============================================================================
// Name        : 10.cpp
// Author      : Ak0s
//============================================================================

// Create a `Stack` class that stores elements
// It should have a `size` method that returns number of elements it has
// It should have a `push` method that adds an element to the stack
// It should have a `pop` method that returns the last element form the stack and also deletes it from it


#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main() {

  Stack stack;

// Fill the stack with 3 value
  stack.push(5);
  stack.push(3);
  stack.push(4);
// Remove the last element and return it (In the given example: Stack size reduces to 2, popped element is 4.)
  stack.pop();
// Prints the array
  stack.print_stack();

  return 0;
}
