/*
 * File Name: square.h
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : virtual public Shape
{
public:
  Square(double x, double y, const char *name, double side_a);
  double area() const override;
  double perimeter() const override;
  double getSideA() const;
  void setSideA(double side_a);
  void display() const override; // override Shape display()

protected:
  double side_a;
};

#endif