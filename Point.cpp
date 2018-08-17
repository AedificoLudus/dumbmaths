#include "Point.h"
#include "iostream"

Point::Point(double initialX, double initialY)
{
  X = initialX;
  Y = initialY;
}

void Point::set_x(double newX)
{
  X = newX;
}

void Point::set_y(double newY)
{
  Y = newY;
}

double Point::get_x()
{
  return X;
}

double Point::get_y()
{
  return Y;
}

std::ostream& operator<<(std::ostream& os, Point& pt)
{
    os << "(" << pt.get_x() << ", " << pt.get_y() << ")";
    return os;
}

bool operator== (Point &p1, Point &p2)
{
return (p1.get_x()== p2.get_x() &&
        p1.get_y()== p2.get_y());
}

bool operator!= (Point &p1, Point &p2)
{
return !(p1== p2);
};

Point operator+= (Point &p1, Point &p2)
{
  p1.set_x(p1.get_x() + p2.get_x());
  p1.set_y(p1.get_y() + p2.get_y());
  return p1;
}
