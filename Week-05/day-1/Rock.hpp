#ifndef ROCK_HPP_
#define ROCK_HPP_

#include <iostream>
#include <string>
#include "Song.hpp"

class Rock : public Song {
  public:
    Rock(std::string artist, std::string title);
    bool set_rating(float rating);
    ~Rock() {}
};

#endif
