//============================================================================
// Name        : Monster.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef MONSTER_HPP_
#define MONSTER_HPP_

#include "Characters.hpp"

class Monster : public Characters {
  public:
    Monster();
    void random_monster_lvl();
    void level_up();
    ~Monster() {}
};

#endif /* MONSTER_HPP_ */
