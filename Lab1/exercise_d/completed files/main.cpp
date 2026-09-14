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