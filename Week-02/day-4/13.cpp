//============================================================================
// Name        : 13.cpp
// Author      : Ak0s
//============================================================================

// Write a program that calculates all the possible combinations with rolling two dices.
// It should print each value how many times occures.
// for example 3 occures 2 times because 1 + 2 and 2 + 1

#include <iostream>
#include<iomanip>
using namespace std;

void print_result(int sum_of_outcome[]);

int main() {
  const int dice1[6] = {1, 2, 3, 4, 5, 6};
  const int dice2[6] = {1, 2, 3, 4, 5, 6};
  int sum_of_outcome[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  for (int i = 0; i < 12; i++)
    for (int j = 0; j < 6; j++)
      for (int k = 0; k < 6; k++)
        if (dice1[j] + dice2[k] == i+2)
          sum_of_outcome[i]++;

  print_result(sum_of_outcome);
  system("PAUSE");
  return 0;
}

void print_result(int sum_of_outcome[]) {
  const int size_of_column = 13;
  cout << "Sum of faces" << setw(30) << "Number of possible outcomes" << endl;
  for(int sum_of_faces=2; sum_of_faces < size_of_column; sum_of_faces++) {
    cout << setw(7) << sum_of_faces << setw(21) << sum_of_outcome[sum_of_faces-2] << endl;
  }
}



