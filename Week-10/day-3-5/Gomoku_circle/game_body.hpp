#ifndef GOMOKU_CIRCLE_SRC_GAME_BODY_HPP_
#define GOMOKU_CIRCLE_SRC_GAME_BODY_HPP_

#include "game_engine.hpp"
#include "game_logic.hpp"
#include "graphics.hpp"

class GameBody : public Game {
  private:
    GameLogic* gamelogic;
    Graphics* graphics;
  public:
    GameBody();
    void init(GameContext& context);
    void render(GameContext& context);
    virtual ~GameBody() {}
};

#endif /* GOMOKU_CIRCLE_SRC_GAME_BODY_HPP_ */
