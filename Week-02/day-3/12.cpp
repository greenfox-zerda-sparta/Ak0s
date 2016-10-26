//============================================================================
// Name        : 12.cpp
// Author      : Ak0s
//============================================================================

// safeUnion: Implement this function to create the union of a and b into the array result!

#include <iostream>
using namespace std;

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
  int j = 0;
  for (int i = 0; i < l_a; i++) {
    result[j] = a[i];
    j++;
  }
  for (int i = 0; i < l_b; i++) {
    result[j] = b[i];
    j++;
  }
}

int main(int argc, char** argv) {
  int a[3] = {1,2,3};
  int b[3] = {4,5,6};
  int c[6];
  safeUnion(a,3,b,3,c,6);
  for (int i = 0; i<6; i++) cout <<c[i] << endl;
}
