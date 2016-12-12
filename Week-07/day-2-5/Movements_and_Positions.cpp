//============================================================================
// Name        : Movements_and_Positions.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "Movements_and_Positions.hpp"

int Movements_and_Positions::get_keycode() {
  return keycode;
}

void Movements_and_Positions::set_keycode(int new_keycode) {
  keycode = new_keycode;
}

void Movements_and_Positions::check_and_fix_init_positions(std::vector<std::vector<int>> map, Characters* boss, std::vector<Characters*> monsters) {
  while (map[boss->get_x() / 65][boss->get_y() / 65] == 0) {
    boss->set_x(65 * (rand() % 10));
    boss->set_y(65 * (rand() % 10));
  }
  for (unsigned int i = 0; i < monsters.size(); i++) {
    while (map[monsters[i]->get_x() / 65][monsters[i]->get_y() / 65] == 0) {
      monsters[i]->set_x(65 * (rand() % 10));
      monsters[i]->set_y(65 * (rand() % 10));
    }
  }
}


void Movements_and_Positions::move_hero_horizontally(GameContext& context, Characters* hero, Graphics* graphics, int direction, int step, int key) {
  if (context.was_key_pressed(direction)) {
    hero->set_x(step);
    if (graphics->get_map()[hero->get_x() / 65][hero->get_y() / 65] == 0) {
      hero->set_x(-step);
    }
    keycode = key;
    hero_step_counter++;
    boss_move = true;
    monsters_move = true;
    if (!graphics->refresh_enemy_status_bar) {
      context.hide_text("hide.bmp", 0, 685);
      graphics->refresh_enemy_status_bar = true;
    }
  }
}

void Movements_and_Positions::move_hero_vertically(GameContext& context, Characters* hero, Graphics* graphics, int direction, int step, int key) {
  if (context.was_key_pressed(direction)) {
    hero->set_y(step);
    if (graphics->get_map()[hero->get_x() / 65][hero->get_y() / 65] == 0) {
      hero->set_y(-step);
    }
    keycode = key;
    hero_step_counter++;
    boss_move = true;
    monsters_move = true;
    if (!graphics->refresh_enemy_status_bar) {
      context.hide_text("hide.bmp", 0, 685);
      graphics->refresh_enemy_status_bar = true;
    }
  }
}

void Movements_and_Positions::move_boss(GameContext& context, Characters* boss, Graphics* graphics) {
  int random_direction = rand() % 4;
  if (hero_step_counter % 2 == 0 and boss_move) {
    if (random_direction == 0) {
      boss->set_x(-65);
      if (graphics->get_map()[boss->get_x() / 65][boss->get_y() / 65] == 0) {
        boss->set_x(65);
      }
    }
    else if (random_direction == 1){
      boss->set_x(65);
      if (graphics->get_map()[boss->get_x() / 65][boss->get_y() / 65] == 0) {
        boss->set_x(-65);
      }
    }
    else if (random_direction == 2){
      boss->set_y(-65);
      if (graphics->get_map()[boss->get_x() / 65][boss->get_y() / 65] == 0) {
        boss->set_y(65);
      }
    }
    else if (random_direction == 3){
      boss->set_y(65);
      if (graphics->get_map()[boss->get_x() / 65][boss->get_y() / 65] == 0) {
        boss->set_y(-65);
      }
    }
  }
  boss_move = false;
}

void Movements_and_Positions::move_monsters(GameContext& context, std::vector<Characters*> monsters, Graphics* graphics) {
  if (hero_step_counter % 2 == 0 and monsters_move) {
    for (unsigned int i = 0; i < monsters.size(); i++) {
      int random_direction = rand() % 4;
      if (random_direction == 0) {
        monsters[i]->set_x(-65);
        if (graphics->get_map()[monsters[i]->get_x() / 65][monsters[i]->get_y() / 65] == 0) {
          monsters[i]->set_x(65);
        }
      }
      else if (random_direction == 1){
        monsters[i]->set_x(65);
        if (graphics->get_map()[monsters[i]->get_x() / 65][monsters[i]->get_y() / 65] == 0) {
          monsters[i]->set_x(-65);
        }
      }
      else if (random_direction == 2){
        monsters[i]->set_y(-65);
        if (graphics->get_map()[monsters[i]->get_x() / 65][monsters[i]->get_y() / 65] == 0) {
          monsters[i]->set_y(65);
        }
      }
      else if (random_direction == 3){
        monsters[i]->set_y(65);
        if (graphics->get_map()[monsters[i]->get_x() / 65][monsters[i]->get_y() / 65] == 0) {
          monsters[i]->set_y(-65);
        }
      }
    }
    monsters_move = false;
  }
}

