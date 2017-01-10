//============================================================================
// Name        : Color.hpp
// Author      : Ak0s
//============================================================================

#ifndef COLOR_HPP_
#define COLOR_HPP_

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

class Color {
  private:
    map<char, int> RGB;
  public:
  //CONSTRUCTORS, DECONSTRUCTOR
    Color();
    Color(int r, int g, int b);
    Color(string hex_code);
    Color(const Color& other_color);
    ~Color();

  //SETTER, GETTER METHODS
    map<char, int> get_rgb() const;
    void set_rgb(int r, int g, int b);

  //UTILITIES
    bool is_valid_hex_code(string hex_code);
    void print_rgb_color();
    map<char, double> RGB_to_HSL();
    map<char, int> HSL_to_RGB(map<char, double> HSL);

  //BASIC COLOR METHODS
    Color blend(const Color& other_color);
    void darken(float amount);
    void lighten(float amount);

  //COLOR MANIPULATING OPERATOR OVERLOADING METHODS
    Color operator+(const Color& other_color);
    Color& operator++();
    Color& operator--();
    Color operator++(int);
    Color operator--(int);
    Color& operator*(const float amount);
    Color& operator/(const float amount);
    bool operator==(const Color& other_color) const;
    bool operator!=(const Color& other_color) const;
    bool operator<(const Color& other_color) const;
    bool operator>(const Color& other_color) const;
    bool operator<=(const Color& other_color) const;
    bool operator>=(const Color& other_color) const;
    Color operator!();

    friend ostream& operator<<(ostream& os, const Color& color);
    friend istream& operator>>(istream& is, Color& color);
};

ostream& operator<<(ostream& os, const Color& color);
istream& operator>>(istream& is, Color& color);

#endif /* COLOR_HPP_ */
