//============================================================================
// Name        : 03.cpp
// Author      : Ak0s
//============================================================================

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

void print_car_specs(Car brand);

int main() {
  Car volvo = {VOLVO, 120000, 7.8};
  Car toyota = {TOYOTA, 100000, 9.2};
  Car land_rover = {LAND_ROVER, 110000, 10.2};
  Car tesla = {TESLA, 17000, 0};

  print_car_specs(volvo);

  return 0;
}

void print_car_specs(Car car) {
  string car_brands[] = {"Volvo", "Toyota", "Land Rover", "Tesla"};
  cout << "Brand: " << car_brands[car.type] << endl;
  cout << "Mileage: " << car.km << " km" << endl;
  if (car.type != TESLA)
    cout << "Consumption on 100 km: " << car.gas << "L" << endl;
}
