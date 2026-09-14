/*
 * File Name: Point.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Paolo Abad, Steven Wu
 * Submission Date: Sept 14, 2026
 */

#ifndef POINT_H
#define POINT_H

// Object representing x and y coordinates on a cartesian plane
class Point
{
private:
  double x; // x coordinate
  double y; // y coordinate

public:
  explicit Point(double a = 0, double b = 0); // prevent implicit conversions between types
  double get_x() const;
  double get_y() const;
  void set_x(double value);
  void set_y(double value);
};

#endif