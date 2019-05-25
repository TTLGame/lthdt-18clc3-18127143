#ifndef _POINT_H_
#define _POINT_H_
#include <iostream>
using namespace std;
class Point {
private:
	float _x;
	float _y;
public:
	float X() { return _x;}
	float Y() { return _y;}
	void SetX(float value) { _x = value; }
	void SetY(float value) { _y = value; }
public:
	Point();
	Point(float,float);
	~Point();
};
#endif