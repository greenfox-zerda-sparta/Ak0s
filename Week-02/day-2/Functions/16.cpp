//============================================================================
// Name        : 16.cpp
// Author      : Ak0s
//============================================================================

//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
//a.) a row
//b.) a column
//c.) all in one line separated by the character '|'
//d.) all in one column

#include <iostream>
using namespace std;

//a//============================================================================

int main(){
  int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

  cout << "Part a.)" << endl;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

//b//============================================================================

  cout << endl << "Part b.)" << endl;
  for(int j = 0; j < 3; j++) {
    for(int i = 0; i < 3; i++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

//c//============================================================================

  cout << endl << "Part c.)" << endl;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << m[i][j] << " ";
    }
    if (i < 2)
      cout << "| ";
  }

//d//============================================================================

  cout << endl << endl << "Part d.)" << endl;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << m[i][j] << endl;
    }
  }

  return 0;
}

