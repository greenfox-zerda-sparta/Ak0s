#ifndef JUKEBOX_HPP_
#define JUKEBOX_HPP_

#include <iostream>
#include <string>
#include "Song.hpp"

class Jukebox {
  private:
    Song** songs;
    unsigned int song_counter;
  public:
    Jukebox();
    void add_song(Song& song);
    void rate_song(std::string artist, std::string title, unsigned int rating);
    float get_artist_rating(std::string artist);
    float get_genre_rating(std::string genre);
    std::string get_top_rated_song();
    std::string get_top_rated_genre();
    ~Jukebox();
};

#endif
