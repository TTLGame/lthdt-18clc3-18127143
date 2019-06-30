#ifndef _FRACTION_H_
#define _FRACTION_H_
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class Fraction {
private:
	int _num;
	int _den;
public:
	int Num() { return _num;}
	int Den() { return _den;}
	void SetNum(int value) { _num = value; }
	void SetDen(int value) { _den = value; }
public:
	Fraction();
	Fraction(int,int);
	~Fraction();
	Fraction(const Fraction &);
public:
	string ToString();
	static Fraction Parse(string line)
	{
		string seperator = "/";
		vector <string> tokens;
		
		int startPos = 0;
		size_t foundPos = line.find(seperator, startPos);
		
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
		Fraction current;
		current._num= stoi(tokens[0]);
		current._den= stoi(tokens[1]);
		return current;
	}
};
#endif