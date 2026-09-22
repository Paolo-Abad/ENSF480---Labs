/*
 * File Name: square.cpp
 * Assignment: Lab 2 Exercise B
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 21, 2026
 */

#include "square.h"
#include <iostream>

using namespace std;

Square::Square(double x, double y, const char *name, double side_a)
    : Shape(x, y, name), side_a(side_a) {}

double Square::area() const
{
  return side_a * side_a;
}

double Square::perimeter() const
{
  return 4 * side_a;
}

double Square::getSideA() const
{
  return side_a;
}

void Square::setSideA(double side_a)
{
  this->side_a = side_a;
}

void Square::display() const
{
  cout << "Square Name: " << shapeName << "\n"
       << "X-coordinate: " << origin.get_x() << "\n"
       << "Y-coordinate: " << origin.get_y() << "\n"
       << "Side a: " << side_a << "\n"
       << "Area: " << area() << "\n"
       << "Perimeter: " << perimeter() << "\n"
       << endl;
}