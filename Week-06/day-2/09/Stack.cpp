//============================================================================
// Name        : 09.cpp - Stack.cpp
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

void Stack::push(Stack& stack, int value) throw(Stack::Exceptions) {
  if (stack.filled_size < 5) {
    stack.array[stack.filled_size] = value;
    stack.filled_size++;
  }
  else {
    throw Exceptions::FULL;
  }
}

int Stack::pop(Stack& stack) throw(Stack::Exceptions) {
  if (stack.filled_size > 0) {
    return stack.filled_size--;
  }
  else {
    throw Exceptions::EMPTY;
  }
}

std::string Stack::interpretException(Stack::Exceptions exception) {
  switch (exception) {
    case Exceptions::FULL:
      return "Error: Failed to push, because the stack is full!";
    case Exceptions::EMPTY:
      return "Error: Failed to pop, because the stack is empty!";
    default:
      return "Unknown error!";
  }
}

Stack::~Stack() {
  delete[] array;
}
