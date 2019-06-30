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
	Triangle(const Triangle &);
public:
	string ToString();
	static Triangle Parse(string line)
	{
		string seperator = ", ";
		vector <string> tokens;
		int check =1;
		int startPos = 0;
		size_t foundPos = line.find(seperator, startPos);
		foundPos = line.find(seperator, foundPos+1);
		while (foundPos != string::npos)
		{
			check++;
			if (check == 2)
			{
				int count = foundPos - startPos;
				string token = line.substr(startPos,count);
				tokens.push_back(token);
				startPos = foundPos + seperator.length();
				check =0;
			}
			if (check == 0)
				foundPos = line.find(seperator,startPos);
			else
				foundPos = line.find(seperator, foundPos+1);
		}
		string token = line.substr(startPos);
		tokens.push_back(token);
		
		
		Triangle current;
				
		current._a = Point::Parse(tokens[0]);
		current._b = Point::Parse(tokens[1]);
		current._c = Point::Parse(tokens[2]);		
		return current;

	}
};
#endif