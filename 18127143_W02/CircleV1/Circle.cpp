#include "Circle.h"
Circle::Circle()
{
	this->_center = Point(0,0);
	this->_radius = 1;
}
Circle::Circle(Point center,float radius)
{
	this ->_center = center;
	this ->_radius =radius;
}
Circle::~Circle()
{

}