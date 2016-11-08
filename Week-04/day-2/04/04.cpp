//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Create a method on student that takes a string as an argument and
// changes it's name property

#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }

    string setName(string name) {
      this->name = name;
      return this->name;
    }
};

int main() {

  Student student1("",0);
   cout << student1.setName("Bill");

  return 0;
}
