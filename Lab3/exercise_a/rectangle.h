/*
 * File Name: rectangle.h
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square
{
private:
  double side_b;

public:
  Rectangle(double x, double y, const char *name, double side_a, double side_b);
  double area() const override;
  double perimeter() const override;
  double getSideB() const;
  void setSideB(double side_b);
  void display() const override;
};

#endif