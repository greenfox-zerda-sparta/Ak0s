//============================================================================
// Name        : 14.cpp - Car Source
// Author      : Ak0s
//============================================================================

#include "Car.hpp"

Car::Car() {};

Car::Car(std::string car_brand, std::string car_color) {
  this->car_brand = car_brand;
  this->car_color = car_color;
}

std::string Car::get_car_brand() {
  return car_brand;
}

std::string Car::get_car_color() {
  return car_color;
}
