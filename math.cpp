#include "iostream"
#include "cmath"
#include "Point.h"
#include "zPoint.h"

double length(Point A, Point B);

int main()
{
  Point testPoint = Point(1, 2);
  std::cout << testPoint << std::endl;
  Point otherPoint = Point(3, 4);
  std::cout << otherPoint << std::endl;
  std::cout << (round(length(testPoint, otherPoint)*100))/100 << std::endl;


  std::cout << "Test ==" << std::endl;
  if (testPoint == otherPoint)
  {
    std::cout << "The Points are equal (incorrect)" << std::endl;
  }
  else
  {
    std::cout << "The Points are not equal (correct)" << std::endl;
  }

  std::cout << "Test !=" << std::endl;
  if (testPoint != otherPoint)
  {
    std::cout << "The Points aren't equal (correct)" << std::endl;
  }
  else
  {
    std::cout << "The Points are equal (incorrect)" << std::endl;
  }

  std::cout << "Test +=" << std::endl;
  testPoint += otherPoint;
  std::cout << testPoint << std::endl;

  std::cout << "Test 3d Points" << std::endl;
  zPoint newTest = zPoint(1, 1, 1);
}

double length(Point A, Point B)
{
  double newX = A.get_x() + B.get_x();
  double newY = A.get_y() + B.get_y();
  return sqrt(pow(newX, 2.0) +
              pow(newY, 2.0));
}
