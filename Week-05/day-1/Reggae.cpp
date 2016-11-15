#include <iostream>
#include <string>
#include "Reggae.hpp"

Reggae::Reggae(std::string artist, std::string title) : Song() {
  set_artist(artist);
  set_title(title);
  set_genre("Reggae");
}

bool Reggae::set_rating(float rating) {
  if (rating >= 1 and rating <= 4) {
    sum_of_ratings += rating;
    rating_counter++;
    return true;
  }
  else {
    std::cout << "Give rating from 1 to 4! It's reggae, it's can't be better than 4..." << std::endl;
    return false;
  }
}
