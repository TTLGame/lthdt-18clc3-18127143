#include "company.h"
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
void NV::InputInfo()
{
	cout<<"Enter Woker's ID : ";
	cin>>this->m_ID;
	cout<<"Enter Woker's name : ";
	cin>>this->m_Name;
	cout<<"Enter Woker's DOB : ";
	cin>>this->m_date;
	//cout<<m_date;
	cout<<"Enter Woker's Address : ";
	cin>>this->m_Address;
}
void NV::OutputInfo()
{
	cout<<"Woker's ID : "<<this->m_ID<<endl;
	cout<<"Woker's name : "<<this->m_Name<<endl;
	cout<<"Woker's DOB : "<<this->m_date<<endl;
	cout<<"Woker's Address : "<<this->m_Address<<endl;
}
Date & Date::operator = (Date p)
{
	this->m_day =p.m_day;
	this->m_month =p.m_month;
	this->m_year =p.m_year;
	return *this;
}
NV::NV()
{
	this->m_Address = " 234 NGUYEN VAN CU ";
	Date date;
	this->m_date = date;
	this->m_ID = "123";
	this->m_Name = "NGUYEN VAN A";

}
NV::NV(string name, string id, string address, Date date)
{
	this->m_Address = address;
	this->m_date = date;
	this->m_ID = id;
	this->m_Name = name;
}
NVSanXuat::NVSanXuat()
{
	this->m_number = 1;
	this->m_Address = " 234 NGUYEN VAN CU ";
	Date date;
	this->m_date = date;
	this->m_ID = "123";
	this->m_Name = "NGUYEN VAN A";

}
NVCongNhat::NVCongNhat()
{
	this->m_NumDay =1;
	this->m_Address = " 234 NGUYEN VAN CU ";
	Date date;
	this->m_date = date;
	this->m_ID = "123";
	this->m_Name = "NGUYEN VAN A";
}