//============================================================================
// Name        : bulls_and_cows.cpp - Secret number Source
// Author      : Ak0s
// Description : Bulls and Cows game implementation
//============================================================================

#include "secret_number.hpp"

Secret_Number::Secret_Number() {
  this->number_length = 10;
  secret_number_generator();
}

void Secret_Number::secret_number_generator() {
  srand (time(NULL));
  std::vector<unsigned int> range_null_to_nine;

  for (unsigned int i = 0; i < 10; i++) {
    range_null_to_nine.push_back(i);
  }

  random_shuffle(range_null_to_nine.begin(),range_null_to_nine.end());

  for (unsigned int i = 0; i < number_length; i++) {
    this->secret_number.push_back(range_null_to_nine[i]);
  }
}

std::vector<unsigned int> Secret_Number::get_secret_number() {
  return secret_number;
}

unsigned int Secret_Number::get_number_length() {
  return number_length;
}

void Secret_Number::set_number_length(unsigned int new_length) {
  this->number_length = new_length;
}
