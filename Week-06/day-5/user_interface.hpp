//============================================================================
// Name        : bulls_and_cows.cpp - User Interface Header
// Author      : Ak0s
// Description : Bulls and Cows game implementation
//============================================================================

#ifndef USER_INTERFACE_HPP_
#define USER_INTERFACE_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include "secret_number.hpp"

class User_Interface : public Secret_Number {
  private:
    unsigned int max_tries;
    unsigned int progress;
  public:
    User_Interface();
    bool rules_and_ready();
    void set_game_params();
    void game_body();
    std::vector<unsigned int> user_guess();
    std::vector<unsigned int> check_guess(std::vector<unsigned int> guess);
    void print_answer_to_guess(std::vector<unsigned int> bulls_and_cows);
    void game_over();
    unsigned int get_max_tries();
    void set_max_tries(unsigned int new_max_tries);
};




#endif
