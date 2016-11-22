//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL)); // This initializes the random generator.
  int rnd = 0;
  for (int i = 0; i < 20; i++) {
    rnd = rand() % 5; // generate a random number in the range [0, 4]
    try {
      switch (rnd) {
        case 0:
          throw 3.2f;
          break;
        case 1:
          throw double(43.56);
          break;
        case 2:
          throw "Abrakadabra";
          break;
        case 3:
          throw false;
          break;
        default:
          throw 12;
          break;
      }
    }
    catch (float excpf) {
      cout << "The exception type is float: " << excpf << endl;
    }
    catch (double excpd) {
      cout << "The exception type is double: " << excpd << endl;
    }
    catch (const char* excps) {
      cout << "The exception type is a pointer to a string: " << excps << endl;
    }
    catch (bool excpb) {
      cout << "The exception type is boolean: " << excpb << endl;
    }
    catch (int excpi) {
      cout << "The exception type is integer: " << excpi << endl;
    }
  }
  return 0;
}
