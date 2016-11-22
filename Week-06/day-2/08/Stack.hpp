//============================================================================
// Name        : 08.cpp - Stack.hpp
// Author      : Ak0s
//============================================================================

#ifndef STACK_HPP_
#define STACK_HPP_

#include <iostream>
#include <string>

class Stack {
  private:
    int* array;
    unsigned int filled_size = 0;
  public:
    Stack();
    void print_array();
    void push(Stack& stack, int value) throw(int);
    int pop(Stack& stack) throw(int);
    std::string interpretException(int exception);
    ~Stack();
};

#endif /* STACK_HPP_ */
