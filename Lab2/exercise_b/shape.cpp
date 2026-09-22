/*
 * File Name: shape.cpp
 * Assignment: Lab 2 Exercise B
 * Completed by:
 *  - Paolo Abad
 * Submission Date: Sept 21, 2026
 */

#include "shape.h"
#include "point.h"
#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;

Shape::Shape(double x, double y, const char *name)
    : origin(x, y), shapeName(new char[strlen(name) + 1])
{
  strcpy(this->shapeName, name);
}

Shape::Shape(const Shape &source)
    : origin(source.origin), shapeName(new char[strlen(source.shapeName) + 1])
{
  assert(shapeName != 0);
  strcpy(shapeName, source.shapeName);
}

Shape &Shape::operator=(const Shape &source)
{
  if (this != &source)
  {
    delete[] shapeName;
    origin = source.origin;
    shapeName = new char[strlen(source.shapeName) + 1];
    assert(shapeName != NULL);
    strcpy(shapeName, source.shapeName);
  }
  return *this;
}

Shape::~Shape()
{
  delete[] shapeName;
  shapeName = NULL;
}

const Point &Shape::getOrigin() const
{
  return origin;
}

const char *Shape::getName() const
{
  return shapeName;
}

void Shape::display() const
{
  cout << "Shape Name: " << shapeName << "\n"
       << "X-coordinate: " << origin.get_x() << "\n"
       << "Y-coordinate: " << origin.get_y() << endl;
}

double Shape::distance(const Shape &other) const
{
  return origin.distance(other.origin);
}

double Shape::distance(const Shape &the_shape, const Shape &other)
{
  return the_shape.origin.distance(other.origin);
}

void Shape::move(double dx, double dy)
{
  double new_x = dx + origin.get_x();
  double new_y = dy + origin.get_y();

  origin.set_x(new_x);
  origin.set_y(new_y);
}