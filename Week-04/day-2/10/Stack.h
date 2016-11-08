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

class Stack {
  private:
    int* array;
    unsigned int stack_size;
  public:
    Stack();
    unsigned int size();
    void push(int value);
    unsigned int pop();
    void print_stack();
};
