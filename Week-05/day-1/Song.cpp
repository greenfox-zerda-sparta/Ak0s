#include <iostream>
#include <string>
#include "Song.hpp"

Song::Song() {
  this->sum_of_ratings = 0;
  this->rating_counter = 0;
}

void Song::set_artist(std::string artist) {
  this->artist = artist;
}

void Song::set_title(std::string title) {
  this->title = title;
}

void Song::set_genre(std::string genre) {
  this->genre = genre;
}

std::string Song::get_artist() {
  return this->artist;
}

std::string Song::get_title() {
  return this->title;
}

std::string Song::get_genre() {
  return this->genre;
}

float Song::get_avg_rating() {
  return sum_of_ratings/rating_counter;
}
