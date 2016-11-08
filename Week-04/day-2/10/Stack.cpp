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

Stack::Stack() {
  stack_size = 0;
  array = new int [stack_size];
}

unsigned int Stack::size() {
  return stack_size;
}

void Stack::push(int value) {
  int* new_array = new int[stack_size + 1];
    for (unsigned int i = 0; i < stack_size + 1; i++) {
      if (i < stack_size) {
        new_array[i] = array[i];
      }
      else {
        new_array[i] = value;
      }
    }
  stack_size++;
  delete[] array;
  array = new_array;
}

unsigned int Stack::pop() {
  int popped_element;
    int* new_array = new int[stack_size - 1];
    for (unsigned int i = 0; i < stack_size; i++) {
      if (i < stack_size - 1) {
        new_array[i] = array[i];
      }
      else {
        popped_element = array[i];
      }
    }
    stack_size--;
    delete[] array;
    array = new_array;
    return popped_element;
}

void Stack::print_stack() {
  for (unsigned int i = 0; i < stack_size; i++) {
    cout << array[i] << " ";
  }
}
