//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error.
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.

// Illustrate in the main function both when it works fine and when exceptions occur.

#include <iostream>
#include <string>
#include "Stack.hpp"

using namespace std;

int main() {
  Stack* stack = new Stack;

//============================================================================
  cout << "Working: Push 5 element, pop 2, print array:" << endl
       << "============================================" << endl;
  try {
    stack->push(*stack, 1);
    stack->push(*stack, 2);
    stack->push(*stack, 3);
    stack->push(*stack, 4);
    stack->push(*stack, 5);

    stack->pop(*stack);
    stack->pop(*stack);

    stack->print_array();
  }
  catch (int excp) {
    cout << stack->interpretException(excp) << endl;
  }

//============================================================================
  cout << endl << endl << "Trying to push a 6. element:" << endl
                       << "============================" << endl;
  try {
    for (int i = 4; i <= 6; i++) {
      stack->push(*stack, i);
    }
      stack->print_array();
  }
  catch (int excp) {
    cout << stack->interpretException(excp) << endl;
  }

//============================================================================
    cout << endl << "Trying to pop when stack is empty:" << endl
                 << "==================================" << endl;

    try {
      for(int i = 0; i <= 5; i++) {
        stack->pop(*stack);
      }
        stack->print_array();
    }
    catch (int excp) {
      cout << stack->interpretException(excp) << endl;
    }

//============================================================================
  delete stack;
  return 0;
}

