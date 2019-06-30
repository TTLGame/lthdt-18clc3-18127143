#ifndef _POINT_H_
#define _POINT_H_
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class Point {
public:
	static int InstanceCount;
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
	Point(const float,const float);
	~Point();
	Point(const Point &);
public:
	float CalcDistanceTo(const Point * other) const;
	string ToString();
public:
	static float CalcDistance(const Point *a,const Point *b);
	static Point Parse(string line)
	{
		string seperator = ", ";
		vector <string> tokens;
		
		line=line.substr(1);
		line=line.substr(0,line.length()-1);
		int startPos = 0;
		size_t foundPos = line.find(seperator, startPos);
		
		while (foundPos != string::npos)
		{
			int count = foundPos - startPos;
			string token = line.substr(startPos,count);
			tokens.push_back(token);
			startPos = foundPos + seperator.length();
			foundPos = line.find(seperator,startPos);
		}
		int count = line.length() - startPos;
		string token = line.substr(startPos, count);
		tokens.push_back(token);
		Point current;
		current._x= stoi(tokens[0]);
		current._y= stoi(tokens[1]);
		return current;
	}

};
#endif