
#ifndef _LINE_H_
#define _LINE_H_
#include "Point.h"
#include <vector>
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
	Line(const Line &);
public:
	string ToString();
	static Line Parse(string line)
	{
		string seperator = ", ";
		vector <string> tokens;
		
		int startPos = 0;
		size_t foundPos = line.find(seperator, startPos);
		foundPos = line.find(seperator, foundPos+1);
		//while (foundPos != string::npos)
		{
			int count = foundPos - startPos;
			string token = line.substr(startPos,count);
			tokens.push_back(token);
			
			
			startPos = foundPos + seperator.length();
			foundPos = line.find(seperator,startPos);
		}
		string token = line.substr(startPos);
		tokens.push_back(token);
		
		
		Line current;
				
		current._start = Point::Parse(tokens[0]);
			current._end = Point::Parse(tokens[1]);
				
		return current;

	}
};
#endif