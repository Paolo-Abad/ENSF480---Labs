/*
 * File Name: circle.cpp
 * Assignment: Lab 3 Exercise A
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 28, 2026
 */

#include "circle.h"
#include <iostream>

#define PI (3.14159)

using namespace std;

Circle::Circle(double x, double y, const char *name, double radius)
    : Shape(x, y, name), radius(radius) {}

double Circle::area() const
{
  return (PI * radius * radius);
}

double Circle::perimeter() const
{
  return (PI * radius * 2);
}

double Circle::getRadius() const
{
  return radius;
}

void Circle::setRadius(double radius)
{
  this->radius = radius;
}

void Circle::display() const
{
  cout << "Circle Name: " << shapeName << "\n"
       << "X-coordinate: " << origin.get_x() << "\n"
       << "Y-coordinate: " << origin.get_y() << "\n"
       << "Radius: " << radius << "\n"
       << "Area: " << area() << "\n"
       << "Perimeter: " << perimeter() << "\n"
       << endl;
}