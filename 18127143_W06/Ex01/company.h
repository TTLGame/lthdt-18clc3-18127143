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
class NV
{
protected:
	string m_ID;
	string m_Name;
	string m_Address;
	Date m_date;
public:
	NV();
	NV(string,string,string,Date);
public:
	void InputInfo();
	void OutputInfo();
};
class NVSanXuat : public NV
{
private:
	int m_number;
public:
	float CalSalary()
	{
		return 1.0*20000*m_number;
	}
public:
	NVSanXuat();
};
class NVCongNhat : public NV
{
private:
	int m_NumDay;
public:
	float CalSalary()
	{
		return 1.0*300000*m_NumDay;
	}
public:
	NVCongNhat();
};