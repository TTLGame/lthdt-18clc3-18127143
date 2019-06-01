#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include "Point.h"
#include <cmath>
class Triangle {
private:
	Point *_a;
	Point *_b;
	Point *_c;
public:
	Point *_A() { return _a;}
	Point *_B() { return _b;}
	Point *_C() { return _c;}
	
	void SetA(Point *value) { _a = value; }
	void SetB(Point *value) { _b = value; }
	void SetC(Point *value) { _c = value; }
public:
	float CalPerimeter()
	{

		float AB=sqrt(pow(1.0*(_b->X()-_a->X()),2)+pow(1.0*(_b->Y()-_a->Y()),2));
		float AC=sqrt(pow(1.0*(_c->X()-_a->X()),2)+pow(1.0*(_c->Y()-_a->Y()),2));
		float BC=sqrt(pow(1.0*(_c->X()-_b->X()),2)+pow(1.0*(_c->Y()-_b->Y()),2));
		return AB+AC+BC;
	}
	float CalArea()
	{
		float AB=sqrt(pow(1.0*(_b->X()-_a->X()),2)+pow(1.0*(_b->Y()-_a->Y()),2));
		float AC=sqrt(pow(1.0*(_c->X()-_a->X()),2)+pow(1.0*(_c->Y()-_a->Y()),2));
		float BC=sqrt(pow(1.0*(_c->X()-_b->X()),2)+pow(1.0*(_c->Y()-_b->Y()),2));
		float p=(AB+AC+BC)/2;
		return sqrt(p*(p-AB)*(p-AC)*(p-BC));
	}
public:
	Triangle();
	Triangle(Point*,Point*,Point*);
	Triangle(const Triangle &cpy);
	Triangle(Point*);
	~Triangle();
};
#endif