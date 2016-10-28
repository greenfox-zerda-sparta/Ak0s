//============================================================================
// Name        : 11.cpp
// Author      : Ak0s
//============================================================================

// write the rotate_right function that rotates the matrix to the left
// so the program should print this:
//
// ####
//   # #
// ####

#include <iostream>
#include <string>

using namespace std;

void rotate_right(char matrix[5][5], char rotated_matrix[5][5]){
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      rotated_matrix[j][i] = matrix[4-i][j];
    }
  }
}

int main() {
  char matrix[5][5] = {
    {' ', ' ', '#', ' ', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', '#', '#', '#', ' '},
    {' ', '#', ' ', '#', ' '},
    {' ', '#', ' ', '#', ' '}
  };

  char rotated_matrix[5][5];

  rotate_right(matrix, rotated_matrix);

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << rotated_matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}
