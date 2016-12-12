//============================================================================
// Name        : MyGame.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "MyGame.hpp"

MyGame::MyGame() {
  srand(time(NULL));
  movements_and_positions = new Movements_and_Positions;
  graphics = new Graphics;
  hero = new Hero;
  boss = new Boss;
  for (int i = 0; i < rand() % 7 + 3; i++) {
    monsters.push_back(new Monster);
  }
  graphics->generate_map();
  movements_and_positions->check_and_fix_init_positions(graphics->get_map(), boss, monsters);
}

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("skeleton.bmp");
  context.load_file("boss.bmp");
  context.load_file("hide.bmp");
}

void MyGame::render(GameContext& context) {
// DRAW TEXTURES
  graphics->draw_map(context);
  graphics->draw_monster(context, monsters);
  graphics->draw_boss(context, boss);
  graphics->draw_hero(context, movements_and_positions->get_keycode(), hero);
// DRAW STATUS BARS
  graphics->hero_status_bar(context, hero);
  graphics->enemy_status_bar(context, boss, hero);
  for (unsigned int i = 0; i < monsters.size(); i++) {
    graphics->enemy_status_bar(context, monsters[i], hero);
  }
// MOVE HERO AND MONSTERS
  movements_and_positions->move_boss(context, boss, graphics);
  movements_and_positions->move_monsters(context, monsters, graphics);
  movements_and_positions->move_hero_vertically(context, hero, graphics, ARROW_UP,-65,0);
  movements_and_positions->move_hero_horizontally(context, hero, graphics, ARROW_RIGHT, 65, 1);
  movements_and_positions->move_hero_vertically(context, hero, graphics, ARROW_DOWN,65,2);
  movements_and_positions->move_hero_horizontally(context, hero, graphics, ARROW_LEFT,-65,3);

  context.render();
}

