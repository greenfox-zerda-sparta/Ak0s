//============================================================================
// Name        : 06.cpp
// Author      : Ak0s
//============================================================================

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?

#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> read_file_by_word();
void reformat_words(vector<string>& alice_in_wonderland);
map<string, int> word_counter(vector<string> alice_in_wonderland);
void print_result(map<string, int> input_map);


int main() {
  print_result(word_counter(read_file_by_word()));
  return 0;
}

vector<string> read_file_by_word() {
  string word;
  vector<string> alice_in_wonderland;
  ifstream alice("alice_adv_in_wonderland.txt");
  while (alice >> word) {
    alice_in_wonderland.push_back(word);
  }
  reformat_words(alice_in_wonderland);
  return alice_in_wonderland;
}

void reformat_words(vector<string>& alice_in_wonderland) {
  string temp;
  char special_chars[] = "\"(),!.?*:;";
  for (unsigned int i = 0; i < alice_in_wonderland.size(); i++) {
    for (unsigned int j = 0; j < sizeof(special_chars)/sizeof(char); j++) {
      alice_in_wonderland[i].erase(remove(alice_in_wonderland[i].begin(), alice_in_wonderland[i].end(), special_chars[j]), alice_in_wonderland[i].end());
    }
  }
}

map<string, int> word_counter(vector<string> alice_in_wonderland) {
  map<string, int> word_counter;
  for (unsigned int i = 0; i < alice_in_wonderland.size(); i++) {
    word_counter[alice_in_wonderland[i]] += 1;
  }
  return word_counter;
}

void print_result(map<string, int> input_map) {
  for (typename map<string, int>::iterator i = input_map.begin(); i != input_map.end(); i++) {
    cout << i->first << ": " << i->second << endl;
  }
}
