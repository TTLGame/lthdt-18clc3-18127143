#ifndef _DATE_H_
#define _DATE_H_
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class Date {
private:
	int _day;
	int _month;
	int	_year;
public:
	int Day() { return _day;}
	int Month() { return _month;}
	int Year() { return _year;}
	void SetDay(int value) { _day = value; }
	void SetMonth(int value) { _month = value; }
	void SetYear(int value) { _year = value;}

public:
	Date();
	Date(int,int,int);
	~Date();
	Date(const Date &);
public:
	string ToString();
	static Date Parse(string line)
	{
		string seperator = "/";
		vector <string> tokens;
		
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
		Date current;
		current._day= stoi(tokens[0]);
		current._month= stoi(tokens[1]);
		current._year = stoi(tokens[2]);
		return current;
	}
};
#endif