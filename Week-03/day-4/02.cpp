//============================================================================
// Name        : 02.cpp
// Author      : Ak0s
//============================================================================

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

void ask_for_input(RectangularCuboid& cuboid);
int get_surface(RectangularCuboid cuboid);
int get_volume(RectangularCuboid cuboid);

int main() {
  RectangularCuboid cuboid;
  ask_for_input(cuboid);

  cout << "The surface of the given cuboid: " << get_surface(cuboid) << endl;
  cout << "The volume of the given cuboid: " << get_volume(cuboid) << endl;

  return 0;
}

void ask_for_input(RectangularCuboid& cuboid) {
  cout << "Give me the parameters of the cuboid." << endl;
  cout << "Length of cuboid: ";
  cin >> cuboid.a;
  cout << "Width of cuboid: ";
  cin >> cuboid.b;
  cout << "Height of cuboid: ";
  cin >> cuboid.c;
}

int get_surface(RectangularCuboid cuboid) {
  return 2 * (cuboid.a * cuboid.b) + 2 * (cuboid.a * cuboid.c) + 2 * (cuboid.b * cuboid.c);
}

int get_volume(RectangularCuboid cuboid) {
  return cuboid.a * cuboid.b * cuboid.c;
}


