#include "library.h"
Date::Date()
{
	this->m_day =1;
	this->m_month =1;
	this->m_year =1;
}
Date::Date(int day,int month,int year)
{
	this->m_day =day;
	this->m_month =month;
	this->m_year =year;
}
istream & operator >> (istream &is, Date &p)
{
	is >> p.m_day >> p .m_month >> p.m_year;
	return is;
}
ostream & operator << (ostream &os,const Date &p)
{
	os << p.m_day <<"/"<<p .m_month <<"/"<< p.m_year;
	return os;
}
void VIPReader::Input()
{
	cout<<"Enter Reader ID : ";
	cin >> this->m_ID;
	cout<<"Enter Reader Name : ";
	cin >> this->m_name;
	cout<<"Enter Reader Exprire Day : ";
	cin >> this->m_exprire;
	cout<<"Enter Reader Gender : ";
	cin >> this->m_gender;
}
void VIPReader::Output()
{
	cout<<"Reader ID : "<<this->m_ID<<endl;
	cout<<"Reader Name : "<<this->m_name<<endl;
	cout<<"Reader Exprire Day : "<<this->m_exprire<<endl;
	cout<<"Reader Gender : "<<this->m_gender<<endl;
}
void NormalReader::Input()
{
	VIPReader::Input();
	cout<<"Enter number of books :";
	cin >> this->m_borrowedBook;
}
