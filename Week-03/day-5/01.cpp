//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
// Task        : Stack (Construct, Push, Pop, Is empty)
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct Stack {
  double* array;
  int size;
};

Stack* stack_construct(double input[], int size);
void stack_push(Stack& stack, double value);
double stack_pop(Stack& stack);
bool stack_is_empty(Stack& stack);

int main() {
  double stack_array[3] = {1,2,3};

//Create and fill the stack with an array till its length (size)
  Stack* stack = stack_construct(stack_array, 3);

//Add a value to the previously created array, making it bigger by 1, and inserting the value
  stack_push(*stack, 5);

//Remove the last element of the stack_array and returns the value of the removed element
  stack_pop(*stack);

//Check whether the stack is empty or not, returning 1 if empty, 0 if not
  stack_is_empty(*stack);

//Just for the demonstration purpose (by Anil)
  for (int i = 0; i < stack->size; i++) {
    cout << stack->array[i] << " ";
  }

  return 0;
}

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->array = new double[size];
  for (int i = 0; i < size; i++) {
    new_stack->array[i] = input[i];
  }
  new_stack->size = size;
  return new_stack;
}

void stack_push(Stack& stack, double value) {
  double* new_array = new double[stack.size+1];
  for (int i = 0; i < stack.size+1; i++) {
    if (i < stack.size) {
      new_array[i] = stack.array[i];
    }
    else {
      new_array[i] = value;
    }
  }
  stack.size++;
  delete[] stack.array;
  stack.array = new_array;
}

double stack_pop(Stack& stack) {
  double popped_element;
  double* new_array = new double[stack.size-1];
  for (int i = 0; i < stack.size; i++) {
    if (i < stack.size-1) {
      new_array[i] = stack.array[i];
    }
    else {
      popped_element = stack.array[i];
    }
  }
  stack.size--;
  delete[] stack.array;
  stack.array = new_array;
  return popped_element;
}

bool stack_is_empty(Stack& stack) {
  return stack.size == 0;
}
