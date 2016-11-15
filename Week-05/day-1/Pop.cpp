#include <iostream>
#include <string>
#include "Pop.hpp"

Pop::Pop(std::string artist, std::string title) : Song() {
  set_artist(artist);
  set_title(title);
  set_genre("Pop");
}

bool Pop::set_rating(float rating) {
  if (rating >= 1 and rating <= 5) {
    sum_of_ratings += rating;
    rating_counter++;
    return true;
  }
  else {
    std::cout << "Give rating from 1 to 5!" << std::endl;
    return false;
  }
}
