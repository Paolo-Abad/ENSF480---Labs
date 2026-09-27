/*
 * File Name: curveCut.h
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#ifndef CURVECUT_H
#define CURVECUT_H

#include "rectangle.h"
#include "circle.h"

class CurveCut : public Rectangle, public Circle
{
public:
  CurveCut(double x, double y, const char *name, double side_a, double side_b, double radius);
  double area() const override;
  double perimeter() const override;
  void display() const override;
};

#endif