//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Create a new instance of the Student class and set it's name to "John" and
// it's age to 21

#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {

  Student student1;
  student1.name = "John";
  student1.age = 21;

  cout << "Name: " << student1.name << endl;
  cout << "Age: " << student1.age;

  return 0;
}
