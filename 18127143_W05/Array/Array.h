#ifndef _ARRAY_H_
#define _ARRAY_H_
#include<iostream>
#include<vector>
#include <string>
#include <sstream>
using namespace std;
class Array
{
private:
	int *a;
	int _len;
public:
	Array();
	Array(const Array &cpy);
	Array(int *,int);
	Array(int);
	~Array();
public:
	string ToString();
	static Array Purse(string line)
	{
		string seperator = ", ";
		vector <string> tokens;
		size_t startPos = 0;
		size_t foundPos = line.find(seperator,startPos);
		while ( foundPos != string::npos)
		{
			int count = foundPos - startPos;
			string token= line.substr(startPos,count);
			tokens.push_back(token);
			startPos= foundPos + seperator.length();
			foundPos = line.find(seperator, startPos);
		}
		int count = line.length() - startPos;
		string token= line.substr(startPos,count);
		tokens.push_back(token);
		Array current;
		current._len = tokens.size();
		current.a = new int[current._len];
		for (int i = 0; i < current._len; i++)
			current.a[i] = stoi(tokens[i]);
		return current;
	}
public:
	Array & operator = (Array);
};
#endif