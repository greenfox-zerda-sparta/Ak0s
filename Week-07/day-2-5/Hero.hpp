//============================================================================
// Name        : Hero.hpp
// Author      : Ak0s
// Description : RPG Game
//============================================================================

#ifndef HERO_HPP_
#define HERO_HPP_

#include "Characters.hpp"

class Hero : public Characters {
  public:
    Hero();
    void level_up();
    ~Hero() {}
};

#endif /* HERO_HPP_ */
