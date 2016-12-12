//============================================================================
// Name        : MyGame.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef MYGAME_HPP_
#define MYGAME_HPP_

#include <iostream>
#include <vector>
#include "game_engine.hpp"
#include "Graphics.hpp"
#include "Movements_and_Positions.hpp"
#include "Hero.hpp"
#include "Boss.hpp"
#include "Monster.hpp"

class MyGame : public Game {
  private:
    Graphics* graphics;
    Movements_and_Positions* movements_and_positions;
    Characters* boss;
    Characters* hero;
    std::vector<Characters*> monsters;
  public:
    MyGame();
    void init(GameContext& context);
    void render(GameContext& context);
    virtual ~MyGame() {}
};

#endif /* MYGAME_HPP_ */
