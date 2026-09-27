/*
 * File Name: shape.h
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape
{
public:
  Shape(double x, double y, const char *name);
  Shape(const Shape &source); // copy constructor along with destructor
  Shape &operator=(const Shape &source);
  ~Shape();
  const Point &getOrigin() const;
  const char *getName() const;
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
  virtual void display() const; // to be overridden by deriving classes
  double distance(const Shape &other) const;
  static double distance(const Shape &the_shape, const Shape &other);
  void move(double dx, double dy);

protected:
  Point origin;
  char *shapeName;
};

#endif