//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
// Task        : Vector (Construct, At, Insert, Find, Remove, Concat)
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct DoubleVector {
  double* vector;
  unsigned int size;
};

DoubleVector* vector_construct(double input[], int size);
double vector_at(DoubleVector& v, unsigned int index);
void vector_insert(DoubleVector& v, unsigned int index, double value);
unsigned int vector_find(DoubleVector& v, double value);
void vector_remove(DoubleVector& v, unsigned int index);
DoubleVector* vector_concat(DoubleVector& v1, DoubleVector v2);

int main() {
  double vector_array[3] = {1, 2, 3};

//Create and fill the vector with an array till its length (size)
  DoubleVector* vector = vector_construct(vector_array, 3);

//Return the value at given index, or return 0, if the index out of bound
  vector_at(*vector,0);

//Insert a number to the given index and push the remaining elements to the right
  vector_insert(*vector, 2, 5);

//Returns the index of a given value in the vector
  vector_find(*vector, 1);

//Remove the element at a given index
  vector_remove(*vector, 2);

//Concet 2 vectors
  vector_concat()

//Just for the demonstration purpose (by Anil)
  for (unsigned int i = 0; i < vector->size; i++) {
    cout << vector->vector[i] << "   ";
  }

  return 0;
}

DoubleVector* vector_construct(double input[], int size) {
  DoubleVector* new_vector = new DoubleVector;
  new_vector->vector = new double[size];
  for (int i = 0; i < size; i++) {
    new_vector->vector[i] = input[i];
  }
  new_vector->size = size;
  return new_vector;
}

double vector_at(DoubleVector& v, unsigned int index) {
  double searched_value;
  if (index < v.size) {
    searched_value = v.vector[index];
  }
  else {
    searched_value = 0;
  }
  return searched_value;
}

void vector_insert(DoubleVector& v, unsigned int index, double value) {
  double* new_vector = new double[v.size + 1];

  for (unsigned int i = 0; i <= v.size; i++) {
    if (i < index)
      new_vector[i] = v.vector[i];
    else if (i > index)
      new_vector[i] = v.vector[i-1];
    else
      new_vector[index] = value;
  }

  v.size++;
  delete[] v.vector;
  v.vector = new_vector;
}

unsigned int vector_find(DoubleVector& v, double value) {
  unsigned int index;
  for (unsigned int i = 0; i < v.size; i++) {
    if (v.vector[i] == value)
      index = i;
  }
  return index;
}

void vector_remove(DoubleVector& v, unsigned int index) {
  double* new_vector = new double[--v.size];
  for (unsigned int i = 0; i < v.size; i++) {
    if (i < index) {
      new_vector[i] = v.vector[i];
    }
    else {
      new_vector[i] = v.vector[i + 1];
    }
  }
  delete v.vector;
  v.vector = new_vector;
}

DoubleVector* vector_concat(DoubleVector& v1, DoubleVector v2) {
  int new_size = v1.size+v2.size;
  double* new_storage = new double[new_size];
  for (int i = 0; i < new_size; i++) {
    new_storage[i] = i < v1.size ? v1.vector[i] : v2.vector[i-v1.size];
  }
  DoubleVector* new_vector = vector_construct(new_storage, new_size);
  return new_vector;
}
