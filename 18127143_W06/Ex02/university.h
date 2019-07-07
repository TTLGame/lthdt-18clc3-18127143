#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Teacher 
{
protected:
	string m_ID;
	string m_Name;
	float m_NormalSalary;
	float m_CoefSalary;
	int m_NumDayOff;
public:
	float CalSalary() { 
		return this->m_CoefSalary*this->m_NormalSalary - this->m_NumDayOff*100000;
	}
	void Input();
	void Output();
public:
	Teacher();
	Teacher(string,string,float,float,int);
};
class HRTeacher : public Teacher
{
public:
	float CalSalary()
	{
		return Teacher::CalSalary() + 500000;
	}
public:
	HRTeacher();
	HRTeacher(string,string,float,float,int);
};