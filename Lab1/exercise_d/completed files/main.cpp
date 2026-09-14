/*
 * File Name: main.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Paolo Abad, Steven Wu
 * Submission Date: Sept 14, 2026
 */

#include <iostream>
#include "Human.h"

int main(int argc, char **argv)
{
  double x = 2000;
  double y = 3000;
  Human human1("Ken Lai", x, y);
  human1.display();
  return 0;
}