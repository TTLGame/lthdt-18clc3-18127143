#include "Point.h"
Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}
Point::Point(float x,float y)
{
	this ->_x = x;
	this ->_y = y;
}
Point::~Point()
{

}
Point::Point(const Point & cpy)
{
	this->_x = cpy._x;
	this->_y = cpy._y;
}
string Point::ToString()
{
	stringstream writer;
	writer << "("<< _x << ", "<< _y << ")";
	return writer.str();
}