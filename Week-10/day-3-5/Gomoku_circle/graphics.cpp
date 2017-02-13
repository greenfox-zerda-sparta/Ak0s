#include "graphics.hpp"

void Graphics::draw_table(GameContext& context) {

  for (unsigned int i = 0; i < map.size(); i++) {
    for (unsigned int j = 0; j < map[i].size(); j++) {
      if (map[i][j] == 0) {
        context.draw_img("floor.bmp", i * 40, j * 40);
      }
      else if (map[i][j] == 1) {
        context.draw_img("o.bmp", i * 40, j * 40);
      }
      else {
        context.draw_img("x.bmp", i * 40, j * 40);
      }
    }
  }
}

std::vector<std::vector<int>> Graphics::get_map() {
  return map;
}

void Graphics::draw_circle_and_cross(GameContext& context, bool clicked) {
  if (clicked) {
    if (context.get_mouse_coordinates().first / 40 < 19 and context.get_mouse_coordinates().first / 40 < 19) {
      if (map[context.get_mouse_coordinates().first / 40][context.get_mouse_coordinates().second / 40] == 0) {
        if (clicks % 2 == 0) {
          int* coordinates;
          coordinates = context.server_communication(1, context.get_mouse_coordinates().first, context.get_mouse_coordinates().second);
          map[coordinates[1] / 40][coordinates[2] / 40] = coordinates[0];
        }
        if (clicks % 2 == 1) {
          int* coordinates;
          coordinates = context.server_communication(2, context.get_mouse_coordinates().first, context.get_mouse_coordinates().second);
          map[coordinates[1] / 40][coordinates[2] / 40] = coordinates[0];
        }
      }
    }
    clicks++;
  }
}

void Graphics::draw_side_panel(GameContext& context) {
  context.draw_img("side_panel.bmp", 760, 0, 80, 760);
  if (clicks % 2 == 0) {
    context.draw_img("o_alpha.bmp", 765, 45, 70, 70);
  }
  else {
    context.draw_img("x_alpha.bmp", 765, 45, 70, 70);
  }
}

void Graphics::draw_game_over(GameContext& context, GameLogic* gamelogic, bool clicked) {
  context.draw_img("gameover.bmp", 0, 280, 760, 200);
  if (clicks % 2 == 0) {
    context.draw_img("x_alpha.bmp", 50, 335, 90, 90);
    context.draw_img("x_alpha.bmp", 630, 335, 90, 90);
  }
  else {
    context.draw_img("o_alpha.bmp", 50, 340, 90, 90);
    context.draw_img("o_alpha.bmp", 630, 340, 90, 90);
  }
  if (clicked) {
    if (context.get_mouse_coordinates().first > 0 and context.get_mouse_coordinates().second > 280 and context.get_mouse_coordinates().second < 480) {
      map = std::vector<std::vector<int>> (19, std::vector<int>(19, 0));
      gamelogic->set_victory(false);
    }
  }
}




