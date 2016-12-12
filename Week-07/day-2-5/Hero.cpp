//============================================================================
// Name        : Hero.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "Hero.hpp"

Hero::Hero() {
  set_lvl(1);
  set_max_hp(20 + 3 * (rand() % 6 + 1));
  set_current_hp(get_max_hp());
  set_sp(5 + rand() % 6 + 1);
  set_dp(2 * (rand() % 6 + 1));
  set_x(0);
  set_y(0);
}

void Hero::level_up() {

}
