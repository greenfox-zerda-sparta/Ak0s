#ifndef REGGAE_HPP_
#define REGGAE_HPP_

#include <iostream>
#include <string>
#include "Song.hpp"

class Reggae : public Song {
  public:
    Reggae(std::string artist, std::string title);
    bool set_rating(float rating);
    ~Reggae() {}
};

#endif
