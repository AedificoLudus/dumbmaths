#include "Point.h"
#include "zPoint.h"
#include "iostream"

zPoint::zPoint(double initialX, double initialY, double initialZ)
{
  X = initialX;
  Y = initialY;
  Z = initialZ;
}

void zPoint::set_z(double newZ)
{
  Z = newZ;
}

double zPoint::get_z()
{
  return Z;
}

std::ostream& operator<<(std::ostream& os, zPoint& pt)
{
    os << "(" << pt.get_x() << ", " << pt.get_y() << ", " << pt.get_z() << ")";
    return os;
}

bool operator== (zPoint &p1, zPoint &p2)
{
return (p1.get_x()== p2.get_x() &&
        p1.get_y()== p2.get_y() &&
        p1.get_z()== p2.get_z());
}

bool operator!= (zPoint &p1, zPoint &p2)
{
return !(p1== p2);
};

zPoint operator+= (zPoint &p1, zPoint &p2)
{
  p1.set_x(p1.get_x() + p2.get_x());
  p1.set_y(p1.get_y() + p2.get_y());
  p1.set_z(p1.get_z() + p2.get_z());
  return p1;
}
