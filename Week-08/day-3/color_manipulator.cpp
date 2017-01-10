//============================================================================
// Name        : color_manipulator.cpp
// Author      : Ak0s
//============================================================================

#include <iostream>
#include "Color.hpp"
using namespace std;

int main() {

  Color color1("#ff0000");
  Color color2("#faad08");

//  color2.darken(0.1);

//  Color color3(color1.blend(color2));

  Color color3 = !color2;

//  color3 = color2 * 0.1;

  cout << color2 << endl;
  cout << color3 << endl;

	return 0;
}
