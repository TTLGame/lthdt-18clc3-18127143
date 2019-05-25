
#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include "Point.h"

class Circle {
private:
	Point _center;
	float _radius;
public:
	Point Center() { return _center;}
	float Radius() { return _radius;}
	void SetCenter(Point value) { _center = value; }
	void SetRadius(float value) { _radius = value; }
public:
	Circle();
	Circle(Point,float);
	~Circle();
};
#endif