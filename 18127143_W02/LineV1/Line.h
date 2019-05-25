
#ifndef _LINE_H_
#define _LINE_H_
#include "Point.h"

class Line {
private:
	Point _start;
	Point _end;
public:
	Point start() { return _start;}
	Point end() { return _end;}
	void SetStart(Point value) { _start = value; }
	void SetEnd(Point value) { _end = value; }
public:
	Line();
	Line(Point,Point);
	~Line();
};
#endif