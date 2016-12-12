//============================================================================
// Name        : Characters.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "Characters.hpp"

void Characters::set_lvl(int lvl_change) {
  lvl += lvl_change;
}

void Characters::set_max_hp(int max_hp_change) {
  max_hp += max_hp_change;
}

void Characters::set_current_hp(int hp_change) {
  current_hp += hp_change;
}

void Characters::set_dp(int dp_change) {
  dp += dp_change;
}

void Characters::set_sp(int sp_change) {
  sp += sp_change;
}

void Characters::set_character_type(std::string char_type) {
  character_type = char_type;
}

void Characters::set_x(int x_change) {
  if (x + x_change < 0) {
    x = 0;
  }
  else if (x + x_change > 585) {
    x = 585;
  }
  else {
  x += x_change;
  }
}

void Characters::set_y(int y_change) {
  if (y + y_change < 0) {
    y = 0;
  }
  else if (y + y_change > 585) {
    y = 585;
  }
  else {
  y += y_change;
  }
}

int Characters::get_lvl() {
  return lvl;
}

int Characters::get_max_hp() {
  return max_hp;
}

int Characters::get_current_hp() {
  return current_hp;
}

int Characters::get_dp() {
  return dp;
}

int Characters::get_sp() {
  return sp;
}

std::string Characters::get_character_type() {
  return character_type;
}

int Characters::get_x() {
  return x;
}

int Characters::get_y() {
  return y;
}
