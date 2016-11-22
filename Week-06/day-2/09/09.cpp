//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// Duplicate the Stack class from the previous exercise.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for the two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.

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
  catch (Stack::Exceptions excp) {
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
  catch (Stack::Exceptions excp) {
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
    catch (Stack::Exceptions excp) {
      cout << stack->interpretException(excp) << endl;
    }

//============================================================================
  delete stack;
  return 0;
}


