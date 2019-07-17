#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include<ctime>
using namespace std;

class Time
{
protected:
	int m_hour;
	int m_minute;
	int m_second;
public:
	Time();
	Time(int, int, int);
	~Time();
};

class GMTTime : public Time
{
public:
	string ToString(int);
};