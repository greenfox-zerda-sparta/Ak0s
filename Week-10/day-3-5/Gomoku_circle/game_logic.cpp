#include "game_logic.hpp"

void GameLogic::check_table(std::vector<std::vector<int>> map) {
  for (unsigned int i = 0; i < map.size(); i++) {
    for (unsigned int j = 0; j < map[i].size(); j++) {
      if (j < 15) {
        five_in_a_row_vertically(map, i, j, 1);
        five_in_a_row_vertically(map, i, j, 2);
      }
      if (i < 15) {
        five_in_a_row_horizontally(map, i, j, 1);
        five_in_a_row_horizontally(map, i, j, 2);
      }
      if (i < 15 and j < 15) {
        five_in_a_row_diagonally_down(map, i, j, 1);
        five_in_a_row_diagonally_down(map, i, j, 2);
      }
      if (i < 15 and j > 3) {
        five_in_a_row_diagonally_up(map, i, j, 1);
        five_in_a_row_diagonally_up(map, i, j, 2);
      }
    }
  }
}

void GameLogic::five_in_a_row_vertically(std::vector<std::vector<int>> map, int i, int j, int x_or_o) {
  if (map[i][j] == x_or_o and map[i][j] == map[i][j + 1] and
                              map[i][j] == map[i][j + 2] and
                              map[i][j] == map[i][j + 3] and
                              map[i][j] == map[i][j + 4]) {
    victory = true;
  }
}
void GameLogic::five_in_a_row_horizontally(std::vector<std::vector<int>> map, int i, int j, int x_or_o) {
  if (map[i][j] == x_or_o and map[i][j] == map[i + 1][j] and
                              map[i][j] == map[i + 2][j] and
                              map[i][j] == map[i + 3][j] and
                              map[i][j] == map[i + 4][j]) {
    victory = true;
  }
}

void GameLogic::five_in_a_row_diagonally_down(std::vector<std::vector<int>> map, int i, int j, int x_or_o) {
  if (map[i][j] == x_or_o and map[i][j] == map[i + 1][j + 1] and
                              map[i][j] == map[i + 2][j + 2] and
                              map[i][j] == map[i + 3][j + 3] and
                              map[i][j] == map[i + 4][j + 4]) {
    victory = true;
  }
}

void GameLogic::five_in_a_row_diagonally_up(std::vector<std::vector<int>> map, int i, int j, int x_or_o) {
  if (map[i][j] == x_or_o and map[i][j] == map[i + 1][j - 1] and
                              map[i][j] == map[i + 2][j - 2] and
                              map[i][j] == map[i + 3][j - 3] and
                              map[i][j] == map[i + 4][j - 4]) {
    victory = true;
  }
}

bool GameLogic::is_victory() {
  return victory;
}
void GameLogic::set_victory(bool won) {
  victory = won;
}
