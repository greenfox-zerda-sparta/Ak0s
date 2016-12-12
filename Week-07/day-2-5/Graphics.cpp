//============================================================================
// Name        : Graphics.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "Graphics.hpp"

void Graphics::generate_map() {
  std::vector<std::vector<int>> base_map(10, std::vector<int>(10, 1));
  map = base_map;
  for (unsigned int i = 1; i < map.size() - 1; i++) {
      for (unsigned int j = 1; j < map[i].size() - 1; j++) {
        ;
        map[i][j] = rand() % 2;
      }
  }
  for (unsigned int i = 1; i < map.size() - 1; i++) {
    for (unsigned int j = 1; j < map[i].size() - 1; j++) {
      if (map[i - 1][j - 1] == 0) {
        map[i][j] = 1;
      }
      else if (map[i][j - 1] == 1 && map[i - 1][j] == 1 && map[i][j + 1] == 1) {
        map[i][j] = 0;
      }
      else if (map[i][j - 1] == 0 && map[i + 1][j] == 0 && map[i - 1][j] == 0 && map[i][j + 1] == 0) {
        map[i][j] = 0;
      }
      else if ((map[i][j - 1] == 1 && map[i + 1][j] == 1) || (map[i - 1][j] == 1 && map[i][j + 1] == 1)) {
        map[i][j] = 1;
      }
    }
  }
}

void Graphics::draw_map(GameContext& context) {
  for (unsigned int i = 0; i < map.size(); i++) {
    for (unsigned int j = 0; j < map[i].size(); j++) {
      if (map[i][j] == 0) {
        context.draw_sprite("wall.bmp", i * 65, j * 65);
      }
      else {
        context.draw_sprite("floor.bmp", i * 65, j * 65);
      }
    }
  }
}

std::vector<std::vector<int>> Graphics::get_map() {
  return map;
}

void Graphics::draw_hero(GameContext& context, int keycode, Characters* hero) {
  switch (keycode) {
    case 0:
      context.draw_sprite("hero-up.bmp", hero->get_x(), hero->get_y());
      break;
    case 1:
      context.draw_sprite("hero-right.bmp", hero->get_x(), hero->get_y());
      break;
    case 2:
      context.draw_sprite("hero-down.bmp", hero->get_x(), hero->get_y());
      break;
    case 3:
      context.draw_sprite("hero-left.bmp", hero->get_x(), hero->get_y());
      break;
  }
}

void Graphics::draw_monster(GameContext& context, std::vector<Characters*> monsters) {
  for (unsigned int i = 0; i < monsters.size(); i++) {
    context.draw_sprite("skeleton.bmp", monsters[i]->get_x(), monsters[i]->get_y());
  }
}

void Graphics::draw_boss(GameContext& context, Characters* boss) {
  context.draw_sprite("boss.bmp", boss->get_x(), boss->get_y());
}

void Graphics::hero_status_bar(GameContext& context, Characters* hero) {
  if (refresh_hero_status_bar) {
    context.print_text("HP:",10,655,30,30);
    if (hero->get_current_hp() < 10) {
      context.print_text(std::to_string(hero->get_current_hp()),40,655,15,30);
    }
    else {
      context.print_text(std::to_string(hero->get_current_hp()),40,655,28,30);
    }

    context.print_text("SP:",100,655,30,30);
    if (hero->get_sp() < 10) {
      context.print_text(std::to_string(hero->get_sp()),130,655,15,30);
    }
    else {
      context.print_text(std::to_string(hero->get_sp()),130,655,28,30);
    }

    context.print_text("DP:",190,655,30,30);
    if (hero->get_dp() < 10) {
      context.print_text(std::to_string(hero->get_dp()),220,655,15,30);
    }
    else {
      context.print_text(std::to_string(hero->get_dp()),220,655,28,30);
    }

    context.print_text("LVL:",275,655,40,30);
    if (hero->get_lvl() < 10) {
      context.print_text(std::to_string(hero->get_lvl()),315,655,15,30);
    }
    else {
      context.print_text(std::to_string(hero->get_lvl()),315,655,28,30);
    }
    refresh_hero_status_bar = false;
  }
}

void Graphics::enemy_status_bar(GameContext& context, Characters* enemy, Characters* hero) {
  if (enemy->get_x() == hero->get_x() and enemy->get_y() == hero->get_y()) {
    if (refresh_enemy_status_bar) {
      context.print_text("HP:",10,685,30,30);
      if (enemy->get_current_hp() < 10) {
        context.print_text(std::to_string(enemy->get_current_hp()),40,685,15,30);
      }
      else {
        context.print_text(std::to_string(enemy->get_current_hp()),40,685,28,30);
      }

      context.print_text("SP:",100,685,30,30);
      if (enemy->get_sp() < 10) {
        context.print_text(std::to_string(enemy->get_sp()),130,685,15,30);
      }
      else {
        context.print_text(std::to_string(enemy->get_sp()),130,685,28,30);
      }

      context.print_text("DP:",190,685,30,30);
      if (enemy->get_dp() < 10) {
        context.print_text(std::to_string(enemy->get_dp()),220,685,15,30);
      }
      else {
        context.print_text(std::to_string(enemy->get_dp()),220,685,28,30);
      }

      context.print_text("LVL:",275,685,40,30);
      if (enemy->get_lvl() < 10) {
        context.print_text(std::to_string(enemy->get_lvl()),315,685,15,30);
      }
      else {
        context.print_text(std::to_string(enemy->get_lvl()),315,685,28,30);
      }
      refresh_enemy_status_bar = false;
    }
  }
}
