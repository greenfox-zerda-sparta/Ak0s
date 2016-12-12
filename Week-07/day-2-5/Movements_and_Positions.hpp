//============================================================================
// Name        : Movements_and_Positions.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef MOVEMENTS_AND_POSITIONS_HPP_
#define MOVEMENTS_AND_POSITIONS_HPP_

#include "game_engine.hpp"
#include "Characters.hpp"
#include "Graphics.hpp"

class Movements_and_Positions {
  private:
    int keycode = 2;
    int hero_step_counter = 0;
    bool boss_move = false;
    bool monsters_move = false;
  public:
    int get_keycode();
    void set_keycode(int new_keycode);
    void check_and_fix_init_positions(std::vector<std::vector<int>> map, Characters* boss, std::vector<Characters*> monsters);
    void move_hero_horizontally(GameContext& context, Characters* hero, Graphics* graphics, int direction, int step, int key);
    void move_hero_vertically(GameContext& context, Characters* hero, Graphics* graphics, int direction, int step, int key);
    void move_boss(GameContext& context, Characters* enemy, Graphics* graphics);
    void move_monsters(GameContext& context, std::vector<Characters*> monsters, Graphics* graphics);
};

#endif /* MOVEMENTS_AND_POSITIONS_HPP_ */
