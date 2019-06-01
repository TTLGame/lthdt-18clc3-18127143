#include "Rectangle.h"
Rectangle::Rectangle()
{
	this->_topLeft = new Point(1,1);
	this->_bottomRight = new Point(10,10);
}
Rectangle::Rectangle(Point *topLeft,Point *bottomRight)
{
	this ->_topLeft=topLeft;
	this ->_bottomRight=bottomRight;
}
Rectangle::Rectangle(const Rectangle &cpy)
{
	_topLeft=cpy._topLeft;
	_bottomRight=cpy._bottomRight;
}
Rectangle::Rectangle(Point *topLeft)
{
	//_topLeft = new Point;
	_topLeft = topLeft;
	_bottomRight = new Point(2,2);
}
Rectangle::~Rectangle()
{
	delete this->_topLeft;
	delete this->_bottomRight;
}