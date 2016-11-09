//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

#include <iostream>
#include <string>
#include "Shape.hpp"
#include "Triangle.hpp"
#include "Square.hpp"

using namespace std;

int main() {
  Shape* shape = new Shape();
  Triangle* triangle = new Triangle();
  Square* square = new Square();
  Shape* a;
  cout << "I am a...  " << *shape->getName() << endl;
  cout << "I am a...  " << *triangle->getName() << endl;
  cout << "I am a...  " << *square->getName() << endl;

  a = square;
  cout << "I am a...  " << *a->getName() << endl;

  a = triangle;
  cout << "I am a...  " << *a->getName() << endl;

  delete shape;
  delete triangle;
  delete square;

  return 0;
}
