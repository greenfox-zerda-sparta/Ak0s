//============================================================================
// Name        : 09.cpp - Stack.hpp
// Author      : Ak0s
//============================================================================

#ifndef STACK_HPP_
#define STACK_HPP_

#include <iostream>
#include <string>

class Stack {
  private:
    int* array;
    unsigned int filled_size;
  public:
    Stack();
    enum Exceptions {FULL, EMPTY};
    void print_array();
    void push(Stack& stack, int value) throw(Stack::Exceptions);
    int pop(Stack& stack) throw(Stack::Exceptions);
    std::string interpretException(Exceptions exception);
    ~Stack();
};

#endif
