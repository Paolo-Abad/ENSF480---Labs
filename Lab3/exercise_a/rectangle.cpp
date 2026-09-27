/*
 * File Name: rectangle.cpp
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double x, double y, const char *name, double side_a, double side_b)
    : Shape(x, y, name), Square(x, y, name, side_a), side_b(side_b) {}

double Rectangle::area() const
{
  return side_a * side_b;
}

double Rectangle::perimeter() const
{
  return 2 * side_a + 2 * side_b;
}

double Rectangle::getSideB() const
{
  return side_b;
}

void Rectangle::setSideB(double side_b)
{
  this->side_b = side_b;
}

void Rectangle::display() const
{
  cout << "Rectangle Name: " << shapeName << "\n"
       << "X-coordinate: " << origin.get_x() << "\n"
       << "Y-coordinate: " << origin.get_y() << "\n"
       << "Side a: " << side_a << "\n"
       << "Side b: " << side_b << "\n"
       << "Area: " << area() << "\n"
       << "Perimeter: " << perimeter() << "\n"
       << endl;
}