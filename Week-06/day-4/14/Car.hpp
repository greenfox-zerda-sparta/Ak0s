//============================================================================
// Name        : 14.cpp - Car Header
// Author      : Ak0s
//============================================================================

#ifndef CAR_HPP_
#define CAR_HPP_

#include <iostream>

class Car {
  private:
    std::string car_brand;
    std::string car_color;
  public:
    Car();
    Car(std::string car_brand, std::string car_color);
    std::string get_car_brand();
    std::string get_car_color();

    ~Car() {};
};

#endif
