//============================================================================
// Name        : Characters.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef CHARACTERS_HPP_
#define CHARACTERS_HPP_

#include <iostream>

class Characters {
  private:
    std::string character_type;
    int lvl;
    int max_hp;
    int current_hp;
    int dp;
    int sp;
    int x;
    int y;
  public:
    void set_lvl(int lvl_change);
    void set_max_hp(int max_hp_change);
    void set_current_hp(int hp_change);
    void set_dp(int dp_change);
    void set_sp(int sp_change);
    void set_character_type(std::string char_type);
    void set_x(int x_change);
    void set_y(int y_change);
    int get_lvl();
    int get_max_hp();
    int get_current_hp();
    int get_dp();
    int get_sp();
    std::string get_character_type();
    int get_x();
    int get_y();
    virtual ~Characters() {}
};




#endif /* CHARACTERS_HPP_ */
