//============================================================================
// Name        : bulls_and_cows.cpp - Secret number Header
// Author      : Ak0s
// Description : Bulls and Cows game implementation
//============================================================================

#ifndef SECRET_NUMBER_HPP_
#define SECRET_NUMBER_HPP_

#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

class Secret_Number {
  private:
    std::vector<unsigned int> secret_number;
    unsigned int number_length;

  public:
    Secret_Number();
    void secret_number_generator();
    std::vector<unsigned int> get_secret_number();
    unsigned int get_number_length();
    void set_number_length(unsigned int new_length);

};

#endif
