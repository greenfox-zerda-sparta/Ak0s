//============================================================================
// Name        : 17.cpp
// Author      : Ak0s
//============================================================================

//Implement the functions declared above.
//Maybe You can use one function in the implementation of an other one...

#include <iostream>
using namespace std;


float divide(float a, float b) {
  float div;
  div = a/b;
  return div;
}

float reciproc(float a) {
  float rec;
  rec = 1/a;
  return rec;
}

int main(int argc, char** argv){

  cout << "Dividing 1 by 4: " << divide(1, 4) << endl;
  cout << "Dividign 1.0 by 5.0: " << divide(1.0, 5.0) << endl;
  cout << "The repciproc of 6 is: " << reciproc(6) << endl;

  return 0;
}
