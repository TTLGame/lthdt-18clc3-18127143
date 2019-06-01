#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include "Point.h"
#include <cmath>
class Rectangle
{
private:
	Point *_topLeft;
	Point *_bottomRight;
public:
	Point *topLeft() { return _topLeft;}
	Point *bottomRight() { return _bottomRight;}
	void SetTopLeft(Point *value) { _topLeft = value; }
	void SetBottomRight(Point *value) { _bottomRight = value; }
public:
	Rectangle();
	Rectangle(const Rectangle &cpy);
	Rectangle(Point*,Point*); 
	Rectangle(Point*);
	~Rectangle();
public:
	float CalcPerimeter()
	{	
		return 2*(fabs(_topLeft->X()-_bottomRight->X())+fabs(_topLeft->Y()-_bottomRight->Y()));
	}
	float CalcArea()
	{
		return (fabs(_topLeft->X()-_bottomRight->X())*fabs(_topLeft->Y()-_bottomRight->Y()));
	}
	 
};
#endif