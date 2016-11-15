#ifndef POP_HPP_
#define POP_HPP_

#include <iostream>
#include <string>
#include "Song.hpp"

class Pop : public Song {
  public:
    Pop(std::string artist, std::string title);
    bool set_rating(float rating);
    ~Pop() {}
};

#endif
