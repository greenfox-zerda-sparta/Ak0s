//============================================================================
// Name        : 06.cpp - Circle.h
// Author      : Ak0s
//============================================================================

// Create a `Circle` class that takes it's radius as constructor parameter
// It should have a `get_circumference` method that returns it's circumference
// It should have a `get_area` method that returns it's area

class Circle {
  private:
    unsigned int radius;
  public:
    Circle(unsigned int rad);
    float get_circumference();
    float get_area();
};
