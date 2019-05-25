#include "Triangle.h"
Triangle::Triangle()
{
	this->_a = Point(0,0);
	this->_b = Point(0,2);
	this->_b = Point(1,1);
}
Triangle::Triangle(Point a,Point b, Point c)
{
	this ->_a = a;
	this ->_b = b;
	this ->_c = c;
}
Triangle::~Triangle()
{

}