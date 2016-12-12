//============================================================================
// Name        : Boss.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "Boss.hpp"

Boss::Boss() {
  set_lvl(1);
  set_max_hp(2 * get_lvl() * (rand() % 6 + 1) + (rand() % 6 + 1));
  set_current_hp(get_max_hp());
  set_sp(get_lvl() * ((rand() % 6 + 1) + 1));
  set_dp(get_lvl() / 2 * (rand() % 6 + 1) + (rand() % 6 + 1) / 2);
  set_x(65 * (rand() % 10));
  set_y(65 * (rand() % 10));
}

void Boss::level_up() {

}
