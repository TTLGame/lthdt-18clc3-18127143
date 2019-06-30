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
Triangle::Triangle(const Triangle & cpy)
{
	this ->_a = cpy._a;
	this ->_b = cpy._b;
	this ->_c = cpy._c;
}
string Triangle::ToString()
{
	stringstream writer;
	writer<<"("<<_a.X()<<","<<_a.Y()<<") ";
	writer<<"("<<_b.X()<<","<<_b.Y()<<") ";
	writer<<"("<<_c.X()<<","<<_c.Y()<<")\n";
	return writer.str();
}