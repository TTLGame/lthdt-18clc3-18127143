#ifndef _DATE_H_
#define _DATE_H_
#include <iostream>
#include <ctime>
using namespace std;
class Date{
private:
	int _day;
	int _month;
	int _year;
public:
	Date();
	Date(int);
	Date(int,int);
	Date(int,int,int);
	Date(const Date&);
	~Date();
public:
	Date &operator =(Date);
	Date &operator +=(int);
	Date &operator -=(int);
	bool operator !=(Date);
	bool operator ==(Date);
	bool operator >(Date);
	bool operator <(Date);
	bool operator >=(Date);
	bool operator <=(Date);
	Date operator +(int);
	Date operator -(int);
	//
	Date Yesterday();
	Date Tomorrow();
	bool Day31(int);
	bool Day30(int);
	//
	Date operator ++(int);
	Date &operator ++();
	Date operator --(int);
	Date &operator --();
	friend ostream & operator <<(ostream &os, const Date&);
	friend istream & operator >>(istream &is, Date&);
	operator int();
	operator long();
};
#endif