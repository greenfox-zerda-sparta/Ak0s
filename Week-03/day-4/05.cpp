//============================================================================
// Name        : 05.cpp
// Author      : Ak0s
//============================================================================

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
// The market price of the houses is 400 EUR / square meters

// Create a function that takes a reference to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)

// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.

// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

#include <string>
#include <iostream>

using namespace std;

struct House {
  string address;
  int price_in_euro;
  int number_of_rooms;
  int m2;
};

bool worth_buying(House house);
int deal_counter(House house[], int length);
House* houses_with_market_price(House house[], int length);
void print_array(House house[]);

int main() {
  int input;

  House array_of_houses[] = {
      {"Béla utca 3.", 32000, 3, 70},
      {"Béla utca 5.", 24000, 4, 80},
      {"Béla utca 7.", 33000, 5, 85},
      {"Béla utca 9.", 42000, 2, 60},
  };

cout << "======================================================================" << endl;

  cout << "Choose a house from the list. Is it worth buying? ";
  cin >> input;
  if (worth_buying(array_of_houses[input-1]) == true)
    cout << "Yes, it's a great deal!" << endl;
  else
    cout << "No, it's overpriced!" << endl;

cout << "======================================================================" << endl;

  cout << "With actual prices, only " << deal_counter(array_of_houses,4)
       << " houses worth buying from the given list!" << endl;

cout << "======================================================================" << endl;

  House* new_array_of_houses = houses_with_market_price(array_of_houses,4);

  cout << "The houses with actual prices: " << endl;
  print_array(array_of_houses);

  cout << endl << "The houses with market prices: " << endl;
  print_array(new_array_of_houses);

  delete[] new_array_of_houses;

cout << "======================================================================" << endl;

  return 0;
}

bool worth_buying(House house) {
  bool worth_it = false;
  if (house.price_in_euro/house.m2 < 400) {
    worth_it = true;
  }
  return worth_it;
}
int deal_counter(House house[], int length) {
  int deal_counter = 0;
  for (int i = 0; i < length; i++) {
    if (house[i].price_in_euro/house[i].m2 < 400) {
      deal_counter++;
    }
  }
  return deal_counter;
}
House* houses_with_market_price(House house[], int length) {
  House* houses_with_market_price = new House[length];

  for (int i = 0; i < length; i++) {
    houses_with_market_price[i].address = house[i].address;
    houses_with_market_price[i].number_of_rooms = house[i].number_of_rooms;
    houses_with_market_price[i].m2 = house[i].m2;
    houses_with_market_price[i].price_in_euro = house[i].m2 * 400;
  }
  return houses_with_market_price;
}
void print_array(House house[]) {
  for (int i = 0; i < 4; i++)
      cout << "Address: " << house[i].address
           << " | Market Price: " << house[i].price_in_euro
           << " € | Rooms: " << house[i].number_of_rooms
           << " | Area: " << house[i].m2 << " m2" << endl;
}
