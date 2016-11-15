#include <iostream>
#include <string>
#include "Song.hpp"
#include "Pop.hpp"
#include "Rock.hpp"
#include "Reggae.hpp"
#include "Jukebox.hpp"

using namespace std;

int main() {
// Creating Jukebox
  Jukebox* jukebox = new Jukebox;

// Creating song1, give it some ratings, print out avg_rating
  Song* song1 = new Pop("Pista","Faék");

  song1->set_rating(5);
  song1->set_rating(5);
  song1->set_rating(5);

  cout << "The avg rating of song1: " << song1->get_avg_rating() << endl;

// Creating song2, give it some ratings, print out avg_rating
  Song* song2 = new Reggae("Jani","Gandzsa");

  song2->set_rating(4);
  song2->set_rating(4);
  song2->set_rating(4);

  cout << "The avg rating of song2: " << song2->get_avg_rating() << endl;

// Creating song3, give it some ratings, print out avg_rating
  Song* song3 = new Pop("Pista","Traktor pajtás");

  song3->set_rating(5);
  song3->set_rating(5);
  song3->set_rating(5);

  cout << "The avg rating of song3: " << song3->get_avg_rating() << endl;

// Creating song3, give it some ratings, print out avg_rating
  Song* song4 = new Rock("NeFogazz","Megveszlek kilóra!");

  song4->set_rating(5);
  song4->set_rating(5);
  song4->set_rating(5);

  cout << "The avg rating of song4: " << song4->get_avg_rating() << endl;

// Adding songs to Jukebox

  jukebox->add_song(*song1);
  jukebox->add_song(*song2);
  jukebox->add_song(*song3);
  jukebox->add_song(*song4);

  cout << jukebox->get_top_rated_song() << endl;
  cout << "Rating of Pop: " << jukebox->get_genre_rating("Pop") << endl;
  cout << "Rating of Rock: " << jukebox->get_genre_rating("Rock") << endl;
  cout << "Rating of Reggae: " << jukebox->get_genre_rating("Reggae") << endl;
  cout << jukebox->get_top_rated_genre() << endl;


  delete song1;
  delete song2;
  delete song3;
  delete jukebox;

	return 0;
}
