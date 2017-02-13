#ifndef GOMOKU_CIRCLE_SRC_GAME_LOGIC_HPP_
#define GOMOKU_CIRCLE_SRC_GAME_LOGIC_HPP_

#include <vector>

class GameLogic {
  private:
    bool victory = false;
    void five_in_a_row_vertically(std::vector<std::vector<int>> map, int i, int j, int x_or_o);
    void five_in_a_row_horizontally(std::vector<std::vector<int>> map, int i, int j, int x_or_o);
    void five_in_a_row_diagonally_down(std::vector<std::vector<int>> map, int i, int j, int x_or_o);
    void five_in_a_row_diagonally_up(std::vector<std::vector<int>> map, int i, int j, int x_or_o);
  public:
    void check_table(std::vector<std::vector<int>> map);
    bool is_victory();
    void set_victory(bool won);
};

#endif /* GOMOKU_CIRCLE_SRC_GAME_LOGIC_HPP_ */
