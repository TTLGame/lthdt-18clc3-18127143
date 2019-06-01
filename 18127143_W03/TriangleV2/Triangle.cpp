#include "Triangle.h"
Triangle::Triangle()
{
	this->_a = new Point(1,1);
	this->_b = new Point(1,2);
	this->_c = new Point(4,2);
}
Triangle::Triangle(Point *a,Point *b, Point *c)
{
	this ->_a = a;
	this ->_b = b;
	this ->_c = c;
}
Triangle::Triangle(const Triangle &cpy)
{
	this ->_a = cpy._a;
	this ->_b = cpy._b;
	this ->_c = cpy._c;
}
Triangle::Triangle(Point *a)
{
	this->_a= a;
	this->_b = new Point(1,2);
	this->_c = new Point(4,2);
}
Triangle::~Triangle()
{
	delete _a;
	delete _b;
	delete _c;

}
