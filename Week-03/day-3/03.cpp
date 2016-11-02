//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================


// Please create a program that asks for a count when it starts.
// It should ask for a number count times, then it should print the average of the numbers.
// It should delete any dynamically allocated resource before the program exits.

#include <iostream>
using namespace std;

float array_avg(int array[], int length);
void ask_for_input(int array[], int length);

int main() {
  int count;
  float avg;

  cout << "How many numbers you want to input?" << endl;
  cin >> count;

  int* p_array = new int[count];
  ask_for_input(p_array,count);
  avg = array_avg(p_array,count);

  cout << "The average of the entered numbers is: " << avg;

  delete p_array;
  return 0;
}

float array_avg(int array[], int length) {
  float avg;
  for (int i = 0; i < length; i++) {
    avg += array[i];
  }
  avg = avg/length;
  return avg;
}

void ask_for_input(int array[], int length) {
  for (int i = 0; i < length; i++) {
    cout << "Enter the " << i+1 << " number! (" << length-i << " left)" << endl;
    cin >> array[i];
  }
}
