//============================================================================
// Name        : 01.cpp
// Author      : Ak0s
//============================================================================

// Change the name of the computer to "Macbook Pro" and print all the stats

#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  double cpu_speed_hz;
  double ram_size;
};

void print_struct_elements(Computer computer);

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name = "Macbook Pro";

  print_struct_elements(computer);

  return 0;
}

void print_struct_elements(Computer computer) {
  cout << "Computer name: " << computer.name << endl;
  cout << "CPU speed: " << computer.cpu_speed_hz << " Hz" << endl;
  cout << "RAM: " << computer.ram_size << " byte" << endl;
}
