//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

int sum_of_gold(Pirate pirates[], int length);
float avg_of_gold(Pirate pirates[], int length);
int find_richest_with_wooden_leg(Pirate pirates[], int length);

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  cout << "The sum of all pirate's gold is: " << sum_of_gold(pirates,6) << endl;
  cout << "The average amount of gold is: " << avg_of_gold(pirates,6) << endl;
  cout << "Richest pirate with wooden leg is: " << find_richest_with_wooden_leg(pirates,6) << endl;

  return 0;
}

int sum_of_gold(Pirate pirates[], int length) {
  int sum_of_gold;
  for (int i = 0; i < length; i++) {
    sum_of_gold += pirates[i].gold_count;
  }
  return sum_of_gold;
}

float avg_of_gold(Pirate pirates[], int length) {
  float avg;
  avg = float(sum_of_gold(pirates,length))/length;
  return avg;
}

int find_richest_with_wooden_leg(Pirate pirates[], int length) {
  int temp = 0;
  for (int i = 0; i < length; i++) {
    if (pirates[i].has_wooden_leg == true && pirates[i].gold_count > temp) {
      temp = pirates[i].gold_count;
    }
  }
  return temp;
}
