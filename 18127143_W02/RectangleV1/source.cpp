#include "Rectangle.h"
Rectangle::Rectangle()
{
	this->_topLeft = Point(0,0);
	this->_bottomRight = Point(0,1);
}
Rectangle::Rectangle(Point topLeft,Point bottomRight)
{
	this ->_topLeft=topLeft;
	this ->_bottomRight=bottomRight;
}
Rectangle::~Rectangle()
{

}