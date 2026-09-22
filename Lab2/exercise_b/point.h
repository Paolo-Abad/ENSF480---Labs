/*
 * File Name: point.h
 * Assignment: Lab 2 Exercise B
 * Completed by:
 *  - Paolo Abad
 *  - Steven Wu
 * Submission Date: Sept 21, 2026
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
  double x;
  double y;
  int id;

  static int nextId;
  static int count;

public:
  Point(double a, double b);
  ~Point(); // destructor
  double get_x() const;
  double get_y() const;
  int get_id() const;
  void set_x(double value);
  void set_y(double value);
  void display() const;
  double distance(const Point &p2) const; // distance between current Point and second arg Point p2
  static int counter();
  static double distance(const Point &p1, const Point &p2); // distance between two Point objects, p1 and p2, overload of non-static version
};

#endif