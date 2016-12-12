//============================================================================
// Name        : bulls_and_cows.cpp - Game Mechanism Header
// Author      : Ak0s
// Description : Bulls and Cows game implementation
//============================================================================

#ifndef GAME_MECHANISM_HPP_
#define GAME_MECHANISM_HPP_

#include "user_interface.hpp"

class Game_Mechanism : public User_Interface {
  private:
    void run_game();
  public:
    Game_Mechanism();
};

#endif
