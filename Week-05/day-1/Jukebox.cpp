#include <iostream>
#include <string>
#include "Jukebox.hpp"

Jukebox::Jukebox() {
  songs = NULL;
  song_counter = 0;
}

void Jukebox::add_song(Song& song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != NULL) {
    for (unsigned int i = 0; i < song_counter; i++) {
      temp[i] = songs[i];
    }
  }
  temp[song_counter] = &song;
  delete[] songs;
  songs = temp;
  song_counter++;
}

void Jukebox::rate_song(std::string artist, std::string title, unsigned int rating) {
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->get_artist() == artist && songs[i]->get_title() == title) {
      songs[i]->set_rating(rating);
    }
  }
}

float Jukebox::get_artist_rating(std::string artist) {
  float artist_sum_of_song_ratings = 0;
  float artist_song_counter = 0;
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->get_artist() == artist) {
      artist_sum_of_song_ratings += songs[i]->get_avg_rating();
      artist_song_counter++;
    }
  }
  return artist_sum_of_song_ratings/artist_song_counter;
}

float Jukebox::get_genre_rating(std::string genre) {
  float genre_sum_of_song_ratings = 0;
  float genre_song_counter = 0;
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->get_genre() == genre) {
      genre_sum_of_song_ratings += songs[i]->get_avg_rating();
      genre_song_counter++;
    }
  }
  return genre_sum_of_song_ratings/genre_song_counter;
}

std::string Jukebox::get_top_rated_song() {
  std::string best_song;
  unsigned int temp = 0;

  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->get_avg_rating() > temp) {
      temp = songs[i]->get_avg_rating();
      best_song = songs[i]->get_artist() + " - " + songs[i]->get_title();
    }
    else if (songs[i]->get_avg_rating() == temp) {
      temp = songs[i]->get_avg_rating();
      best_song += " | " + songs[i]->get_artist() + " - " + songs[i]->get_title();
    }
  }
  return "The top rated song(s) is/are: " + best_song;
}

std::string Jukebox::get_top_rated_genre() {
  std::string best_genre;

  if (get_genre_rating("Pop") >= get_genre_rating("Rock") and get_genre_rating("Pop") >= get_genre_rating("Reggae")) {
    best_genre = "Pop";
    if (get_genre_rating("Pop") == get_genre_rating("Rock")) {
      best_genre += ", Rock";
    }
    else if (get_genre_rating("Pop") == get_genre_rating("Reggae")) {
      best_genre += ", Reggae";
    }
    else if (get_genre_rating("Pop") == get_genre_rating("Rock") and get_genre_rating("Rock") == get_genre_rating("Reggae")) {
      best_genre += ", Rock, Reggae";
    }
  }
  else if (get_genre_rating("Rock") >= get_genre_rating("Pop") and get_genre_rating("Rock") >= get_genre_rating("Reggae")) {
    best_genre = "Rock";
    if (get_genre_rating("Pop") == get_genre_rating("Rock")) {
      best_genre += ", Pop";
    }
    else if (get_genre_rating("Rock") == get_genre_rating("Reggae")) {
      best_genre += ", Reggae";
    }
    else if (get_genre_rating("Pop") == get_genre_rating("Rock") and get_genre_rating("Rock") == get_genre_rating("Reggae")) {
      best_genre += ", Pop, Reggae";
    }
  }
  else if (get_genre_rating("Reggae") >= get_genre_rating("Pop") and get_genre_rating("Reggae") >= get_genre_rating("Rock")){
    best_genre = "Reggae";
    if (get_genre_rating("Reggae") == get_genre_rating("Rock")) {
      best_genre += ", Rock";
    }
    else if (get_genre_rating("Pop") == get_genre_rating("Reggae")) {
      best_genre += ", Pop";
    }
    else if (get_genre_rating("Pop") == get_genre_rating("Rock") and get_genre_rating("Rock") == get_genre_rating("Reggae")) {
      best_genre += ", Pop, Rock";
    }
  }
  return "The top rated genre(s) is/are: " + best_genre;
}

Jukebox::~Jukebox() {
  delete[] songs;
}
