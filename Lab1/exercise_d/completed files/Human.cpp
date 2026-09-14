#include "Point.h"
#include "Human.h"
#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

Human::Human(const char *name, double x, double y)
    : location(x, y), name(new char[strlen(name) + 1])
{
  strcpy(this->name, name);
}

Human::Human(const Human &source)
    : location(source.location), name(new char[strlen(source.name) + 1])
{
  assert(name != 0);
  strcpy(name, source.name);
}

Human &Human::operator=(Human &source)
{
  if (this != &source)
  {
    delete[] name;
    location = source.location;
    name = new char[strlen(source.name) + 1];
    assert(name != NULL);
    strcpy(name, source.name);
  }
  return *this;
}

Human::~Human()
{
  delete[] name;
  name = NULL;
}

const char *Human::get_name() const
{
  return name;
}

Point Human::get_point() const
{
  return location;
}

void Human::set_name(char *name)
{
  char *temp = new char[strlen(name) + 1];
  strcpy(temp, name);
  delete[] this->name; // release old name to prevent leak
  this->name = temp;
}

void Human::display()
{
  cout << "Human Name: " << name << "\nHuman Location: "
       << location.get_x() << " ,"
       << location.get_y() << ".\n"
       << endl;
}