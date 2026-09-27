/*
 * File Name: circle.h
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : virtual public Shape
{
private:
  double radius;

public:
  Circle(double x, double y, const char *name, double radius);
  double area() const override;
  double perimeter() const override;
  double getRadius() const;
  void setRadius(double radius);
  void display() const override;
};

#endif