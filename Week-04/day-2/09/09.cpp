//============================================================================
// Name        : 09.cpp
// Author      : Ak0s
//============================================================================

// Create a student Class
// that has a method `add_grade`, that takes a grade from 1 to 5
// an other method `get_average`, that returns the average of the grades

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

  Student student1;

// Giving 12 grades to student1
  student1.add_grade(4);
  student1.add_grade(5);
  student1.add_grade(4);
  student1.add_grade(4);
  student1.add_grade(5);
  student1.add_grade(4);
  student1.add_grade(4);
  student1.add_grade(5);
  student1.add_grade(4);
  student1.add_grade(5);
  student1.add_grade(5);
  student1.add_grade(5);

// Print the average of the grades
  cout << student1.get_average();


  return 0;
}
