//============================================================================
// Name        : color.cpp
// Author      : Ak0s
//============================================================================

#include "Color.hpp"

Color::Color() {
  RGB['R'] = 0;
  RGB['G'] = 0;
  RGB['B'] = 0;
}

Color::Color(int r, int g, int b) {
  set_rgb(r, g, b);
}

Color::Color(string hex_code) {
  try {
    if (is_valid_hex_code(hex_code)) {
      string::iterator it = hex_code.begin();

      string str_r(it + 1, it + 3);
      str_r = "0x" + str_r;
      const char* r = str_r.c_str();

      string str_g(it + 3, it + 5);
      str_g = "0x" + str_g;
      const char* g = str_g.c_str();

      string str_b(it + 5, it + 7);
      str_b = "0x" + str_b;
      const char* b = str_b.c_str();

      set_rgb(strtol(r,NULL,0),strtol(g,NULL,0),strtol(b,NULL,0));
    }
    else {
      throw "Invalid HEX color code!";
    }
  }
  catch (const char* excp) {
    cout << excp << endl;
  }
}

Color::Color(const Color& other_color) {
  RGB = other_color.get_rgb();
}

Color::~Color() {}

map<char, int> Color::get_rgb() const {
  return RGB;
}

void Color::set_rgb(int r, int g, int b) {
  if (r <= 255 and r >= 0) {
    RGB['R'] = r;
  }
  else if (r > 255) {
    RGB['R'] = 255;
  }
  else {
    RGB['R'] = 0;
  }
  if (g <= 255 and g >= 0) {
    RGB['G'] = g;
  }
  else if (g > 255) {
    RGB['G'] = 255;
  }
  else {
    RGB['G'] = 0;
  }
  if (b <= 255 and b >= 0) {
    RGB['B'] = b;
  }
  else if (b > 255) {
    RGB['B'] = 255;
  }
  else {
    RGB['B'] = 0;
  }
}

bool Color::is_valid_hex_code(string hex_code) {
  for (unsigned int i = 1; i < hex_code.length(); i++) {
    if (!isxdigit(hex_code[i])) {
      return false;
    }
  }
  return true;
}

void Color::print_rgb_color() {
  cout << "RGB: ";
  for (map<char, int>::reverse_iterator i = RGB.rbegin(); i != RGB.rend(); i++) {
    cout << int(i->second) << " ";
  }
  cout << endl;
}

map<char, double> Color::RGB_to_HSL() {
// Convert RGB to RGB percentage
  vector<double> RGB_perc = {double(RGB['R']) / 255,
                             double(RGB['G']) / 255,
                             double(RGB['B']) / 255};

// Define max, min, and delta
  double max = *max_element(RGB_perc.begin(), RGB_perc.end()),
         min = *min_element(RGB_perc.begin(), RGB_perc.end()),
         delta = max - min;

// Create HSL map to store the converted values
  map<char, double> HSL;

// Define Hue
  if (delta == 0) {
    HSL['H'] = 0;
  }
  else if (max == RGB_perc[0]){
    HSL['H'] = 60 * (fmod(((RGB_perc[1] - RGB_perc[2]) / delta), 6));
  }
  else if (max == RGB_perc[1]){
    HSL['H'] = 60 * (((RGB_perc[2] - RGB_perc[0]) / delta) + 2);
  }
  else if (max == RGB_perc[2]){
    HSL['H'] = 60 * (((RGB_perc[0] - RGB_perc[1]) / delta) + 4);
  }

// Define Lightness
  HSL['L'] = ((max + min) / 2);

// Define Saturation
  if (delta == 0) {
    HSL['S'] = 0;
  }
  else {
    HSL['S'] = delta / (1 - fabs(2 * HSL['L'] - 1));
  }

  return HSL;
}

map<char, int> Color::HSL_to_RGB(map<char, double> HSL) {
// Define auxiliary variables
  double C = (1 - abs(2 * HSL['L'] - 1)) * HSL['S'],
         X = C * (1 - abs(fmod(HSL['H'] / 60, 2) - 1)),
         m = HSL['L'] - C / 2;

// Create HSL map to store the converted values
  map<char, int> converted_RGB;

// Define RGB values with C, X, m
  if (HSL['H'] >= 0 and HSL['H'] < 60) {
    converted_RGB['R'] = (C + m) * 255;
    converted_RGB['G'] = (X + m) * 255;
    converted_RGB['B'] = m * 255;
  }
  else if (HSL['H'] >= 60 and HSL['H'] < 120) {
    converted_RGB['R'] = (X + m) * 255;
    converted_RGB['G'] = (C + m) * 255;
    converted_RGB['B'] = m * 255;
  }
  else if (HSL['H'] >= 120 and HSL['H'] < 180) {
    converted_RGB['R'] = m * 255;
    converted_RGB['G'] = (C + m) * 255;
    converted_RGB['B'] = (X + m) * 255;
  }
  else if (HSL['H'] >= 180 and HSL['H'] < 240) {
    converted_RGB['R'] = m * 255;
    converted_RGB['G'] = (X + m) * 255;
    converted_RGB['B'] = (C + m) * 255;
  }
  else if (HSL['H'] >= 240 and HSL['H'] < 300) {
    converted_RGB['R'] = (X + m) * 255;
    converted_RGB['G'] = m * 255;
    converted_RGB['B'] = (C + m) * 255;
  }
  else if (HSL['H'] >= 300 and HSL['H'] < 360) {
    converted_RGB['R'] = (C + m) * 255;
    converted_RGB['G'] = m * 255;
    converted_RGB['B'] = (X + m) * 255;
  }

  return converted_RGB;
}

Color Color::blend(const Color& other_color) {
  Color blended_color;
  blended_color.set_rgb((this->RGB['R'] + other_color.get_rgb()['R']) / 2,
                        (this->RGB['G'] + other_color.get_rgb()['G']) / 2,
                        (this->RGB['B'] + other_color.get_rgb()['B']) / 2);
  return blended_color;
}

void Color::darken(float amount) {
  set_rgb(RGB['R'] * (1 - amount),
          RGB['G'] * (1 - amount),
          RGB['B'] * (1 - amount));
}

void Color::lighten(float amount) {
  set_rgb(RGB['R'] * (1 + amount),
          RGB['G'] * (1 + amount),
          RGB['B'] * (1 + amount));
}

Color Color::operator+(const Color& other_color) {
  return this->blend(other_color);
}

Color& Color::operator++() {
  this->lighten(0.1);
  return *this;
}

Color& Color::operator--() {
  this->darken(0.1);
  return *this;
}

Color Color::operator++(int) {
  Color temp(*this);
  operator++();
  return temp;
}

Color Color::operator--(int) {
  Color temp(*this);
  operator--();
  return temp;
}

Color& Color::operator*(const float amount) {
  this->lighten(amount);
  return *this;
}

Color& Color::operator/(const float amount) {
  this->darken(amount);
  return *this;
}

ostream& operator<<(ostream& os, const Color& color) {
  os << "#" << hex << setfill('0') << setw(2) << color.RGB.at('R')
                   << setfill('0') << setw(2) << color.RGB.at('G')
                   << setfill('0') << setw(2) << color.RGB.at('B');
  return os;
}

istream& operator>>(istream& is, Color& color) {
  int r, g, b;
  cout << "Enter R:";
  is >> r;
  cout << "Enter G:";
  is >> g;
  cout << "Enter B:";
  is >> b;
  color.set_rgb(r, g, b);
  return is;
}

bool Color::operator==(const Color& other_color) const {
  return (RGB.at('R') == other_color.RGB.at('R') &&
          RGB.at('G') == other_color.RGB.at('G') &&
          RGB.at('B') == other_color.RGB.at('B'));
}

bool Color::operator!=(const Color& other_color) const {
  return (RGB.at('R') != other_color.RGB.at('R') &&
          RGB.at('G') != other_color.RGB.at('G') &&
          RGB.at('B') != other_color.RGB.at('B'));
}

bool Color::operator<(const Color& other_color) const {
  return (RGB.at('R') + RGB.at('G') + RGB.at('B') <
          other_color.RGB.at('R') + other_color.RGB.at('G') + other_color.RGB.at('B'));
}

bool Color::operator>(const Color& other_color) const {
  return (RGB.at('R') + RGB.at('G') + RGB.at('B') >
          other_color.RGB.at('R') + other_color.RGB.at('G') + other_color.RGB.at('B'));
}

bool Color::operator<=(const Color& other_color) const {
  return (RGB.at('R') + RGB.at('G') + RGB.at('B') <=
          other_color.RGB.at('R') + other_color.RGB.at('G') + other_color.RGB.at('B'));
}

bool Color::operator>=(const Color& other_color) const {
  return (RGB.at('R') + RGB.at('G') + RGB.at('B') >=
          other_color.RGB.at('R') + other_color.RGB.at('G') + other_color.RGB.at('B'));
}

Color Color::operator!() {
  map<char, double> HSL = RGB_to_HSL();
  HSL['H'] += 180;
  Color complement_color (HSL_to_RGB(HSL)['R'], HSL_to_RGB(HSL)['G'], HSL_to_RGB(HSL)['B']);
  return complement_color;
}

