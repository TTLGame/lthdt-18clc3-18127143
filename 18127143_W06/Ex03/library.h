#pragma once
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
	int m_day;
	int m_month;
	int m_year;
public:
	Date();
	Date(int,int,int);
	Date & operator = (Date);
	friend istream & operator >> (istream &is, Date&); 
	friend ostream & operator << (ostream &os, const Date&); 
};
class VIPReader
{
protected:
	string m_ID;
	string m_name;
	Date m_exprire;
	string m_gender;
public:
	void Input();
	void Output();
	float Fee() { return 50000;}
};
class NormalReader :public VIPReader
{
private:
	int m_borrowedBook;
public:
	void Input();
	float Fee() {return this->m_borrowedBook*VIPReader::Fee();}
};