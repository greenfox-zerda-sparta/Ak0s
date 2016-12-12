//============================================================================
// Name        : Graphics.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef GRAPHICS_HPP_
#define GRAPHICS_HPP_

#include <iostream>
#include <vector>
#include "game_engine.hpp"
#include "Characters.hpp"

class Graphics {
  private:
    std::vector<std::vector<int>> map;
  public:
    bool refresh_hero_status_bar = true;
    bool refresh_enemy_status_bar = true;

    void generate_map();
    void draw_map(GameContext& context);
    std::vector<std::vector<int>> get_map();

    void draw_hero(GameContext& context, int keycode, Characters* hero);
    void draw_monster(GameContext& context, std::vector<Characters*> monsters);
    void draw_boss(GameContext& context, Characters* boss);

    void hero_status_bar(GameContext& context, Characters* hero);
    void enemy_status_bar(GameContext& context, Characters* enemy, Characters* hero);
    void monsters_status_bar(GameContext& context, std::vector<Characters*> monsters, Characters* hero);
};



#endif /* GRAPHICS_HPP_ */
