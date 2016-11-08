//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// Create a new instance of the Student class and set it's name to "John" and
// it's age to 21 with it's constructor

#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {

  Student student1("John",21);

  cout << "Name: " << student1.name << endl;
  cout << "Age: " << student1.age;

  return 0;
}
