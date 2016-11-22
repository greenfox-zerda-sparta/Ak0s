//============================================================================
// Name        : 08.cpp - Stack.cpp
// Author      : Ak0s
//============================================================================

#include "Stack.hpp"

Stack::Stack() {
  this->array = new int[5];
  this->filled_size = 0;
}

void Stack::print_array() {
  for (unsigned int i = 0; i < filled_size; i++) {
    std::cout << array[i] << " ";
  }
}

void Stack::push(Stack& stack, int value) throw(int) {
  if (stack.filled_size < 5) {
    stack.array[stack.filled_size] = value;
    stack.filled_size++;
  }
  else {
    throw 1;
  }
}

int Stack::pop(Stack& stack) throw(int) {
  if (stack.filled_size > 0) {
    return stack.filled_size--;
  }
  else {
    throw 2;
  }
}

std::string Stack::interpretException(int exception) {
  switch (exception) {
    case 1:
      return "Error: Failed to push, because the stack is full!";
    case 2:
      return "Error: Failed to pop, because the stack is empty!";
    default:
      return "Unknown error!";
  }
}

Stack::~Stack() {
  delete[] array;
}
