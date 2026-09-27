/*
 * File Name: curveCut.cpp
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#include "curveCut.h"
#include <iostream>
#include <cstdlib>

using namespace std;

CurveCut::CurveCut(double x, double y, const char *name, double side_a, double side_b, double radius)
    : Shape(x, y, name), Rectangle(x, y, name, side_a, side_b), Circle(x, y, name, radius)
{
  if (radius > side_a || radius > side_b)
  {
    cerr << "Error: radius of circle must be less than or equal to either side of rectangle"
         << endl;
    exit(1);
  }
}

double CurveCut::area() const
{
  return (Rectangle::area() - (Circle::area() / 4.0));
}

double CurveCut::perimeter() const
{
  return (Rectangle::perimeter() - (2.0 * getRadius()) + (Circle::perimeter() / 4.0));
}

void CurveCut::display() const
{
  cout << "CurveCut Name: " << shapeName << "\n"
       << "X-coordinate: " << origin.get_x() << "\n"
       << "Y-coordinate: " << origin.get_y() << "\n"
       << "Width: " << getSideB() << "\n"
       << "Length: " << getSideA() << "\n"
       << "Radius of the cut: " << getRadius() << "\n"
       << endl;
}