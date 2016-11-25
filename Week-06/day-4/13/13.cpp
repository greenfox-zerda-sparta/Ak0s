//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

//Create a 2 dimensional matrix with vectors!
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1
// Extend it to the following format:
// 1 1 1 1 1
// 0 1 0 0 1
// 0 0 1 0 1
// 0 0 0 1 1
// 0 0 0 0 1
// Mirror it horizontally!
// Mirror it vertically!

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void mirror_horizontally(vector<vector<int>>& _myvector);
void mirror_vertically(vector<vector<int>>& _myvector, unsigned int matrix_size);
void convert_to_extended_format(vector<vector<int>>& _myvector, unsigned int matrix_size);

int main() {
// INITIALIZE THE N*N MATRIX WITH THE SIZE:
  unsigned int matrix_size = 4;
  vector<vector<int>> matrix(matrix_size, vector<int>(matrix_size));

// CONVERT THE MATRIX TO THE GIVEN FORM:
  convert_to_extended_format(matrix, matrix_size);
// MIRRORING THE MATRIX HORIZONTALLY:
// mirror_horizontally(matrix);
// MIRRORING THE MATRIX VERTICALLY:
 // mirror_vertically(matrix, matrix_size);

// PRINT THE MATRIX:
  for (unsigned int i = 0; i < matrix.size(); i++) {
    for (unsigned int j = 0; j < matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

void convert_to_extended_format(vector<vector<int>>& _myvector, unsigned int matrix_size) {
  _myvector.push_back(vector<int>(matrix_size + 1));
  for (unsigned int i = 0; i < _myvector.size() - 1; i++) {
    _myvector[i].push_back(1);
  }
  for (unsigned int i = 0; i < _myvector.size(); i++) {
    _myvector[0][i] = 1;
  }
  for (unsigned int i = 1; i < _myvector.size(); i++) {
    _myvector[i][i]++;
  }
}

void mirror_horizontally(vector<vector<int>>& _myvector) {
  for (unsigned int i = 0; i < _myvector[i].size() / 2; i++) {
    _myvector[i].swap(_myvector[_myvector[i].size() - i - 1]);
  }
}

void mirror_vertically(vector<vector<int>>& _myvector, unsigned int matrix_size) {
  for (unsigned int i = 0; i < matrix_size + 1; i++) {
    reverse(_myvector[i].begin(), _myvector[i].end());
  }
}
