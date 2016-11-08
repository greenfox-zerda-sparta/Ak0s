//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// Create a method on the Student class called "greet" that returns a string
// like: "Hello my name is: <student name>"

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

    string greet(string name) {
      return "Hello, my name is: " + name + "!";
    }

};

int main() {

  Student student1("John",21);
  cout << student1.greet(student1.name);

  return 0;
}
