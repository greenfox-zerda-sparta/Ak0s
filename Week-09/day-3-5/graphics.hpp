#ifndef GRAPHICS_HPP_
#define GRAPHICS_HPP_

#include <iostream>
#include <vector>
#include "game_engine.hpp"
#include "game_logic.hpp"


class Graphics {
  private:
    std::vector<std::vector<int>> map = std::vector<std::vector<int>> (19, std::vector<int>(19, 0));
    unsigned int clicks = 0;
  public:
    void draw_table(GameContext& context);
    std::vector<std::vector<int>> get_map();
    void draw_circle_and_cross(GameContext& context, bool clicked);
    void draw_side_panel(GameContext& context);
    void draw_game_over(GameContext& context, GameLogic* gamelogic, bool clicked);
};



#endif /* GRAPHICS_HPP_ */
