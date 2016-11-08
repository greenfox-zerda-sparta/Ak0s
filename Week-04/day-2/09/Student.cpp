//============================================================================
// Name        : 09.cpp - Student.cpp
// Author      : Ak0s
//============================================================================

// Create a student Class
// that has a method `add_grade`, that takes a grade from 1 to 5
// an other method `get_average`, that returns the average of the grades

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student() {
  this->grade_counter = 0;
}

void Student::add_grade(int grade) {
  if (grade <= 5 and grade >= 1) {
    grades[grade_counter] = grade;
    grade_counter++;
  }
  else {
    cout << "Invalid grade input! Please give a grade between 1 and 5" << endl;
  }
  grade_storage_manager();
}

void Student::grade_storage_manager() {
  if (grade_counter == 0.8 * num_of_grades) {
    num_of_grades *= 2;
    unsigned int* new_grades = new unsigned int[num_of_grades];
    for (unsigned int i = 0; i < grade_counter; i++) {
      new_grades[i] = grades[i];
    }
    delete[] grades;
    grades = new_grades;
  }
}

float Student::get_average() {
  float avg;
  for (unsigned int i = 0; i < grade_counter; i++) {
    avg += grades[i];
  }
  return avg/grade_counter;
}

