#include "game_body.hpp"
#include "game_engine.hpp"

int main(int argc, char* args[]) {
  GameBody game;
  GameEngine engine(&game, 840, 760);
  engine.run();
  return 0;
}
