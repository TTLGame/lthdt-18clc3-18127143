#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include "Point.h"
class Rectangle
{
private:
	Point _topLeft;
	Point _bottomRight;
public:
	Point topLeft() { return _topLeft;}
	Point bottomRight() { return _bottomRight;}
	void SetTopLeft(Point value) { _topLeft = value; }
	void SetBottomRight(Point value) { _bottomRight = value; }
public:
	Rectangle();
	Rectangle(Point,Point);
	~Rectangle();
};
#endif