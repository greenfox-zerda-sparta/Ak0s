//============================================================================
// Name        : Monster.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "Monster.hpp"

Monster::Monster() {
  set_lvl(1);
  random_monster_lvl();
  set_max_hp(2 * get_lvl() * (rand() % 6 + 1));
  set_current_hp(get_max_hp());
  set_sp(get_lvl() * (rand() % 6 + 1));
  set_dp(get_lvl() / 2 * (rand() % 6 + 1));
  set_x(65 * (rand() % 10));
  set_y(65 * (rand() % 10));
}

void Monster::random_monster_lvl() {
  int random_lvl = rand() % 100 + 1;
  if (random_lvl > 50 and random_lvl < 90) {
    set_lvl(get_lvl());
  }
  else {
    set_lvl(get_lvl() + 1);
  }
}

void Monster::level_up() {

}
