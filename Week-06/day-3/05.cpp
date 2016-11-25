//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

//Create a function template that takes 2 different typenames, and prints out
//which one is stored in more bytes from then

#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
void has_more_bytes(T1 a, T2 b) {
  if (sizeof(a) > sizeof(b)) {
    cout << a << endl;
  }
  else {
    cout << b << endl;
  }
}

int main() {
  int a = 10;
  float b = 12.4;
  double c = 3.14;
  char d = 'a';
  string e = "Jani";

  has_more_bytes(a,b);
  has_more_bytes(b,c);
  has_more_bytes(d,a);
  has_more_bytes(c,e);


  return 0;
}
