//============================================================================
// Name        : Boss.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef BOSS_HPP_
#define BOSS_HPP_

#include "Characters.hpp"

class Boss : public Characters {
  public:
    Boss();
    void level_up();
    ~Boss() {}
};

#endif /* BOSS_HPP_ */
