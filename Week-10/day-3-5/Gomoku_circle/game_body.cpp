#include "game_body.hpp"

GameBody::GameBody() {
  graphics = new Graphics;
  gamelogic = new GameLogic;
}

void GameBody::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("side_panel.bmp");
  context.load_file("x.bmp");
  context.load_file("o.bmp");
  context.load_file("x_alpha.bmp");
  context.load_file("o_alpha.bmp");
  context.load_file("gameover.bmp");
}

void GameBody::render(GameContext& context) {
  if (!gamelogic->is_victory()) {
    graphics->draw_circle_and_cross(context, context.was_clicked());
    gamelogic->check_table(graphics->get_map());
    graphics->draw_table(context);
    graphics->draw_side_panel(context);
    SDL_Delay(35);
  }
  else {
    graphics->draw_game_over(context, gamelogic, context.was_clicked());
    SDL_Delay(50);
  }
  context.render();
}

