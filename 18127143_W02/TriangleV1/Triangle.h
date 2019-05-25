#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include "Point.h"

class Triangle {
private:
	Point _a;
	Point _b;
	Point _c;
public:
	Point _A() { return _a;}
	Point _B() { return _b;}
	Point _C() { return _c;}
	
	void SetA(Point value) { _a = value; }
	void SetB(Point value) { _b = value; }
	void SetC(Point value) { _c = value; }
public:
	Triangle();
	Triangle(Point,Point,Point);
	~Triangle();
};
#endif