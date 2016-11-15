#include <iostream>
#include <string>
#include "Rock.hpp"

Rock::Rock(std::string artist, std::string title) : Song() {
  set_artist(artist);
  set_title(title);
  set_genre("Rock");
}

bool Rock::set_rating(float rating) {
  if (rating >= 2 and rating <= 5) {
    sum_of_ratings += rating;
    rating_counter++;
    return true;
  }
  else {
    std::cout << "Give rating from 2 to 5! It can't be worse than 2, because it ROCKS!" << std::endl;
    return false;
  }
}
