#ifndef HUMAN_H
#define HUMAN_H

#include "Point.h"

// Object representing a person with a name and location on a cartesian plane.
class Human
{
private:
  Point location; // Location of person on cartesian plane
  char *name;     // Name of person

public:
  explicit Human(const char *name = "", double x = 0, double y = 0); // prevent implicit conversions between types
  Human(const Human &source);                                        // added copy constructor
  Human &operator=(Human &source);                                   // Assignment operator
  ~Human();                                                          // destructor
  const char *get_name() const;                                      // const on return type to prevent changing memory through pointer
  void set_name(char *name);
  Point get_point() const;
  void display();
};

#endif