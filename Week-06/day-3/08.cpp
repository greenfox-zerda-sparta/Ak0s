//============================================================================
// Name        : 08.cpp
// Author      : Ak0s
//============================================================================

//Create a class template for a calculator
//it should have all the basic methods: add, subtract, multiply, divide
//use exceptions to handle errors in special cases! (find the special cases!)

#include <iostream>
#include <string>

using namespace std;

template <typename NUMS>
class Calculator {
  private:
    NUMS num1;
    NUMS num2;
  public:
    NUMS addition(NUMS a, NUMS b) {
      return a + b;
    }
    NUMS subtraction(NUMS a, NUMS b) {
      return a - b;
    }
    NUMS multiplication(NUMS a, NUMS b) {
      return a * b;
    }
    NUMS division(NUMS a, NUMS b) throw(const char*) {
      if (b != 0) {
        return a / b;
      }
      else {
        throw "Divide by zero is forbidden!";
      }
    }
};

int main() {

  try {
  cout << "Integer inputs 10 and 7:" << endl;
  Calculator<int> calc1;
  cout << "Result of addition: ";
  cout << calc1.addition(10,7) << endl;
  cout << "Result of subtraction: ";
  cout << calc1.subtraction(10,7) << endl;
  cout << "Result of multiplication: ";
  cout << calc1.multiplication('n','e') << endl;
  cout << "Result of division: ";
  cout << calc1.division(10,7) << endl;
  }
  catch (const char* excp) {
    cout << "Error: " << excp << endl;
  }

  try {
  cout << endl << "Float inputs 10.2 and 7.7:" << endl;
  Calculator<float> calc2;
  cout << "Result of addition: ";
  cout << calc2.addition(10.2,7.7) << endl;
  cout << "Result of subtraction: ";
  cout << calc2.subtraction(10.2,7.7) << endl;
  cout << "Result of multiplication: ";
  cout << calc2.multiplication(10.2,7.7) << endl;
  cout << "Result of division: ";
  cout << calc2.division(10.2,7.7) << endl;
  }
  catch (const char* excp) {
    cout << "Error: " << excp << endl;
  }

  try {
  cout << endl << "Double inputs 10.121 and 7.345:" << endl;
  Calculator<double> calc3;
  cout << "Result of addition: ";
  cout << calc3.addition(10.121,7.345) << endl;
  cout << "Result of subtraction: ";
  cout << calc3.subtraction(10.121,7.345) << endl;
  cout << "Result of multiplication: ";
  cout << calc3.multiplication(10.121,7.345) << endl;
  cout << "Result of division: ";
  cout << calc3.division(10.121,7.345) << endl;
  }
  catch (const char* excp) {
    cout << "Error: " << excp << endl;
  }

  return 0;
}
