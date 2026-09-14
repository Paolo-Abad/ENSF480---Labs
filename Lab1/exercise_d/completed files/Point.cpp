/*
 * File Name: Point.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Paolo Abad, Steven Wu
 * Submission Date: Sept 14, 2026
 */

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
