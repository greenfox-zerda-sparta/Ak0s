//============================================================================
// Name        : 10.cpp
// Author      : Ak0s
//============================================================================

// Create a game that figures a number that the user picked between 0 and 10
// It should ask questions like:
//  - Is the number greater than 5? [y/n]
//  - Is the number smaller than 4? [y/n]
// (don't have to ask both kind)
//
// It should wait for input after the question
//
// If the answer is not "y" or "n" it should re-ask the question;
//
// If the program knows enough it should tell the picked number like:
// Your number is: 8

// Ak0s: I made the program a bit more interactive! :)

#include <iostream>
#include <string>
using namespace std;

int main() {
  char y_or_n;
  bool done = false;
  int max;
  int min;

  cout << "Pick a number and the program will figure out the number you picked by asking as few questions as possible!" << endl;
  cout << "On what interval do you want to play the game?" << endl;
  cout << "Min: "; cin >> min; cout << "Max: "; cin >> max; cout << endl;
  cout << "If your answer is yes to a particular question type Y, if no type N!" << endl;
  cout << "(Say y if the program asks the exect number you picked!)" << endl << endl;
  cout << "Is the number smaller than " << (min+max)/2 << "?" << endl;
  cin >> y_or_n;

  while (!done) {
	if (max - min < 3){
	  cout << "The number you picked is: " << max;
	  done = true;
	  break;
	}
    else if (y_or_n == 'y') {
      max = (min+max)/2;
      cout << "Is the number smaller than " << (min+max)/2 << "?" << endl;
      cin >> y_or_n;
    }
    else if (y_or_n == 'n') {
      min = (min+max)/2;
      cout << "Is the number smaller than " << (min+max)/2 << "?" << endl;
      cin >> y_or_n;
    }
    else if (y_or_n != 'n' && y_or_n != 'y') {
      cout << "Please answer with y or n!" << endl;
      cout << "Is the number smaller than " << (min+max)/2 << "?" << endl;
      cin >> y_or_n;
      continue;
    }
  }
  return 0;
}
