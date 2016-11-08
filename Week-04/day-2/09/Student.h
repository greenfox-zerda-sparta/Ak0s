//============================================================================
// Name        : 09.cpp - Student.h
// Author      : Ak0s
//============================================================================

// Create a student Class
// that has a method `add_grade`, that takes a grade from 1 to 5
// an other method `get_average`, that returns the average of the grades

#include <iostream>
#include <string>

class Student {
  private:
    unsigned int num_of_grades = 10;
    unsigned int* grades = new unsigned int[num_of_grades];
    unsigned int grade_counter;
    void grade_storage_manager();
  public:
    Student();
    void add_grade(int grade);
    float get_average();

};
