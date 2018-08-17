#pragma once

#include "Point.h"

class zPoint : public Point
{
public:

  zPoint(double initialX, double initialY, double initialZ);
  void set_z(double newZ);
  double get_z();
  friend std::ostream& operator<<(std::ostream& os, Point& pt);
  friend bool operator== (Point &p1, Point &p2);
  friend bool operator!= (Point &p1, Point &p2);
  friend Point operator+= (Point &p1, Point &p2);

private:

  double X;
  double Y;
  double Z;
};
