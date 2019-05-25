#include "Line.h"
Line::Line()
{
	this->_start = Point(0,0);
	this->_end = Point(0,1);
}
Line::Line(Point start,Point end)
{
	this ->_start = start;
	this ->_end = end;
}
Line::~Line()
{

}