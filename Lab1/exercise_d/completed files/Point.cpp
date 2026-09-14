#include "Point.h"

Point::Point(double a, double b) : x(a), y(b) {}

double Point::get_x() const
{
  return x;
}

double Point::get_y() const
{
  return y;
}

void Point::set_x(double value)
{
  x = value;
}

void Point::set_y(double value)
{
  y = value;
}
