//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// The market price of the houses is 400 EUR / square meters
// Create a constructor for the House class that takes it's address and area.

#include <iostream>
#include <string>

using namespace std;

class House {
  private:
    string address;
    unsigned int area;
    unsigned int price;
  public:
    unsigned int get_price() {
      return this->price;
    }
    House(string address, unsigned int area) {
      this->address = address;
      this->area = area;
      this->price = area * 400;
    }
};

int main() {
  House house = House("Andrassy 66", 349);
  cout << house.get_price();

  return 0;
}
