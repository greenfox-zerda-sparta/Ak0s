//============================================================================
// Name        : main.cpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#include "game_engine.hpp"
#include "MyGame.hpp"

int main(int argc, char* args[]) {
  MyGame game;
  GameEngine engine(&game, 650, 720);
  engine.run();
  return 0;
}
