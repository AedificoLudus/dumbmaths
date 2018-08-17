#pragma once

#include "iostream"

class Point
{
public:

  Point(double initialX, double initialY);
  void set_x(double newX);
  void set_y(double newY);
  double get_x();
  double get_y();
  friend std::ostream& operator<<(std::ostream& os, Point& pt);
  friend bool operator== (Point &p1, Point &p2);
  friend bool operator!= (Point &p1, Point &p2);
  friend Point operator+= (Point &p1, Point &p2);


private:

  double X;
  double Y;
};
