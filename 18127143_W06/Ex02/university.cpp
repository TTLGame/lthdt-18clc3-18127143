#include "university.h"
void Teacher::Input()
{
	cout<<"Enter Teacher ID : ";
	cin >> this->m_ID;
	cout<<"Enter Teacher Name : ";
	cin >> this->m_Name;
	cout<<"Enter Teacher Coef Salary : ";
	cin >> this->m_CoefSalary;
	cout<<"Enter Teacher Normal Salary : ";

	cin >> this->m_NormalSalary;
	cout<<"Enter Teacher Days Off : ";
	cin >> this->m_NumDayOff;
}
void Teacher::Output()
{
	cout<<"Teacher ID : "<<this->m_ID<<endl;
	cout<<"Teacher Name : "<<this->m_Name<<endl;
	cout<<"Teacher Coef Salary : "<<this->m_CoefSalary<<endl;
	cout<<"Teacher Normal Salary : "<<setprecision(10)<<this->m_NormalSalary<<endl;
	cout<<"Teacher Days Off : "<<this->m_NumDayOff<<endl;
}
Teacher::Teacher()
{
	this->m_ID = "1";
	this->m_Name = "Long";
	this->m_CoefSalary = 2.34;
	this->m_NormalSalary = 3000000;
	this->m_NumDayOff =0;
}
Teacher::Teacher(string id,string name,float coef,float salary,int dayoff)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_CoefSalary = coef;
	this->m_NormalSalary = salary;
	this->m_NumDayOff = dayoff;
}
HRTeacher::HRTeacher():Teacher()
{
}
HRTeacher::HRTeacher(string id,string name,float coef,float salary,int dayoff): Teacher(id,name,coef,salary,dayoff)
{
}