//============================================================================
// Name        : bulls_and_cows.cpp - Game Mechanism Source
// Author      : Ak0s
// Description : Bulls and Cows game implementation
//============================================================================

#include "game_mechanism.hpp"

Game_Mechanism::Game_Mechanism() {
  run_game();
}

void Game_Mechanism::run_game() {
  if (rules_and_ready()) {
    set_game_params();
    game_body();
  }
  else {
    exit(0);
  }

}
