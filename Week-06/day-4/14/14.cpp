//============================================================================
// Name        : 14.cpp - Main
// Author      : Ak0s
//============================================================================

//Create a vector of string, for the following car types:
//"Moszkvics", "Volga", "ZISZ", "Tatra", "Zbrojovka", "Hotchkiss", "DAF", "Warszawa", "Puli", "Balaton",
//"Benz", "Marauder", "Zsiguli" , "IFA", "Fjord", "Trabant", "Wartburg", "Martini"
//Create a vector of strings, for the following colors:
//"Piros", "Narancssarga", "Zold", "Kek", "Turkiz", "Barna", "Lila", "Sarga", "Fekete", "Feher"
//Create a Car class, which holds 2 strings, the name of a car, and a color
//Create a 3 dimensional vector of our car class, that will represent a "parking house"
    //1 dimension: row of cars
    //2 dimension: cars on a platform like a table game
    //3 dimension: "parking house"
//Make this parking house 4*4*8 (4*4 platform on 8 floors), then fill it with cars :)
//Give these cars a random type from our car type vector
//Give these cars a random color from our color vector
//Print how much "Sarga"-"Zsiguli" we have, with their position in the parking house!
//At the end empty the parking house!

#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <iomanip>
#include "Car.hpp"

using namespace std;

void fill_parking_house(vector<vector<vector<Car>>>& car_class_vector, vector<string>& car_brands, vector<string>& car_colors);
void print_parking_house(vector<vector<vector<Car>>>& car_class_vector);
void find_sarga_zsiguli(vector<vector<vector<Car>>>& car_class_vector);

int main() {
  unsigned int floors = 8;
  unsigned int rows = 4;
  unsigned int platforms = 4;

  vector<string> car_brands = {"Moszkvics", "Volga", "ZISZ", "Tatra", "Zbrojovka", "Hotchkiss", "DAF", "Warszawa", "Puli",
                               "Balaton", "Benz", "Marauder", "Zsiguli" , "IFA", "Fjord", "Trabant", "Wartburg", "Martini"};

  vector<string> car_colors = {"Piros", "Narancssarga", "Zold", "Kek", "Turkiz", "Barna", "Lila", "Sarga", "Fekete", "Feher"};

  vector<vector<vector<Car>>> parking_house(floors, vector<vector<Car>> (rows, vector<Car>(platforms)));

  fill_parking_house(parking_house,car_brands,car_colors);
  print_parking_house(parking_house);
  find_sarga_zsiguli(parking_house);

  system("PAUSE");
  return 0;
}

void fill_parking_house(vector<vector<vector<Car>>>& car_class_vector, vector<string>& car_brands, vector<string>& car_colors) {
  srand (time(NULL));
  for (unsigned int i = 0; i < car_class_vector.size(); i++) {
    for (unsigned int j = 0; j < car_class_vector[0].size(); j++) {
      for (unsigned int k = 0; k < car_class_vector[0][0].size(); k++) {
        Car new_car(car_brands[rand() % car_brands.size()], car_colors[rand() % car_colors.size()]);
        car_class_vector[i][j][k] = new_car;
      }
    }
  }
}

void print_parking_house(vector<vector<vector<Car>>>& car_class_vector) {
  cout << "========================================================================================================================" << endl;
  for (unsigned int i = 0; i < car_class_vector.size(); i++) {
    cout << setw(50) << i << ". FLOOR:" << setw(62) << "|" << endl
         << "========================================================================================================================" << endl
         << setw(7);
         for (unsigned int plat = 0; plat < car_class_vector[0][0].size(); plat++) {
           cout << "|" << setw(16) << "PLATFORM " << plat + 1 << "." << setw(8) << "|" << setw(3);
         }
         cout << endl << "========================================================================================================================" << endl;
    for (unsigned int j = 0; j < car_class_vector[0].size(); j++) {
      cout << "ROW " << j + 1;
      for (unsigned int k = 0; k < car_class_vector[0][0].size(); k++) {
        cout << " | " << car_class_vector[i][j][k].get_car_color()
             << " "  << car_class_vector[i][j][k].get_car_brand()
             << setw(25 - (car_class_vector[i][j][k].get_car_color().length()+car_class_vector[i][j][k].get_car_brand().length())) << " | ";
      }
      cout << endl;
    }
    cout << "========================================================================================================================" << endl;
  }
  cout << endl;
}

void find_sarga_zsiguli(vector<vector<vector<Car>>>& car_class_vector) {
  for (unsigned int i = 0; i < car_class_vector.size(); i++) {
    for (unsigned int j = 0; j < car_class_vector[0].size(); j++) {
      for (unsigned int k = 0; k < car_class_vector[0][0].size(); k++) {
        if (car_class_vector[i][j][k].get_car_color() == "Sarga" && car_class_vector[i][j][k].get_car_brand() == "Zsiguli") {
          cout << "Found a Sarga Zsiguli in the praking house at: " << endl
               << "Floor: " << setw(4) << i << "." << endl
               << "Row: " << setw(6) << j + 1 << "." << endl
               << "Platform: " << k + 1 << "." << endl << endl;
        }
      }
    }
  }
}
