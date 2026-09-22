/*
 * File Name: square.h
 * Assignment: Lab 2 Exercise B
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 21, 2026
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
  Square(double x, double y, const char *name, double side_a);
  virtual double area() const;
  virtual double perimeter() const;
  double getSideA() const;
  void setSideA(double side_a);
  virtual void display() const override; // override Shape display()

protected:
  double side_a;
};

#endif