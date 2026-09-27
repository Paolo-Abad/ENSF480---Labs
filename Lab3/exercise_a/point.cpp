/*
 * File Name: point.cpp
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#include "point.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int Point::nextId = 1001;
int Point::count = 0;

Point::Point(double a, double b) : x(a), y(b), id(nextId++)
{
  ++count;
}

Point::~Point()
{
  --count;
}

double Point::get_x() const
{
  return x;
}

double Point::get_y() const
{
  return y;
}

int Point::get_id() const
{
  return id;
}

void Point::set_x(double value)
{
  x = value;
}

void Point::set_y(double value)
{
  y = value;
}

void Point::display() const
{
  ios_base::fmtflags oldFlags = cout.flags();
  streamsize oldPrecision = cout.precision(); // save old io settings

  cout << fixed << setprecision(2);
  cout << "X-coordinate: " << setw(9) << x << "\n"
       << "Y-coordinate: " << setw(9) << y << endl;

  cout.flags(oldFlags);
  cout.precision(oldPrecision); // returns io settings to default
}

double Point::distance(const Point &p2) const
{
  double xdifference = x - p2.x;
  double ydifference = y - p2.y;
  double distance = sqrt(xdifference * xdifference + ydifference * ydifference);
  return distance;
}

int Point::counter()
{
  return count;
}

double Point::distance(const Point &p1, const Point &p2)
{
  return p1.distance(p2);
}