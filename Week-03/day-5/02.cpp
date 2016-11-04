//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
// Task        : Optimized Stack (Construct, Push, Pop)
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Stack {
  double* array;
  int filled_size;
  int real_size;
};

Stack* stack_construct(double input[], int size);
void stack_push(Stack& stack, double value);
double stack_pop(Stack& stack);
int optimal_size(int size);

int main() {
  double stack_array[3] = {1, 2, 3};

//Create and fill the stack with an array till its length (size)
  Stack* stack = stack_construct(stack_array, 3);

//Add a value to the previously created array, making it bigger by 1, and inserting the value
  stack_push(*stack, 5);

//Remove the last element of the stack_array and returns the value of the removed element
  stack_pop(*stack);

//Just for the demonstration purpose (by Anil)
  for (int i = 0; i < stack->filled_size; i++) {
    cout << stack->array[i] << " ";
  }

  return 0;
}

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->array = new double[optimal_size(size)];
  for (int i = 0; i < size; i++) {
    new_stack->array[i] = input[i];
  }
  new_stack->filled_size = size;
  new_stack->real_size = optimal_size(size);
  return new_stack;
}

void stack_push(Stack& stack, double value) {
  if (stack.real_size - stack.filled_size <= 0.2 * optimal_size(stack.filled_size)) {
    double* new_array = new double[optimal_size(stack.filled_size + 1)];
    for (int i = 0; i < stack.filled_size + 1; i++) {
      if (i < stack.filled_size) {
        new_array[i] = stack.array[i];
      }
      else {
        new_array[i] = value;
      }
    }
    stack.filled_size++;
    stack.real_size = optimal_size(stack.filled_size);
    delete[] stack.array;
    stack.array = new_array;
  }
  else {
    stack.array[stack.filled_size + 1] = value;
    stack.filled_size++;
  }
}

double stack_pop(Stack& stack) {
  double popped_element;
  popped_element = stack.array[stack.filled_size-1];
  stack.filled_size--;
  return popped_element;
}

int optimal_size(int size) {
  int i = 0;
  while (i < size) {
    if (2*size < pow(2,i)) {
      size = pow(2,i);
      break;
    }
    else {
      i++;
    }
  }
  return size;
}
