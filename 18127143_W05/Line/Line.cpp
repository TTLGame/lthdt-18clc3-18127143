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
Line::Line(const Line & cpy)
{
	this ->_start = cpy._start;
	this ->_end = cpy._end;
}
string Line::ToString()
{
	stringstream writer;
	writer << "Start :"<< _start.ToString();
	writer << " End :"<< _end.ToString();
	return writer.str();
}