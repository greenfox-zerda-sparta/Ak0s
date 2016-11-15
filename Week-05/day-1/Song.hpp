#ifndef SONG_HPP_
#define SONG_HPP_

#include <iostream>
#include <string>

class Song {
  private:
    std::string artist;
    std::string title;
    std::string genre;
  protected:
    float sum_of_ratings;
    float rating_counter;
  public:
    Song();
    void set_artist(std::string artist);
    void set_title(std::string title);
    void set_genre(std::string genre);
    std::string get_artist();
    std::string get_title();
    std::string get_genre();
    virtual bool set_rating(float rating) = 0;
    float get_avg_rating();
    virtual ~Song() {}
};

#endif
