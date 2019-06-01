#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>

#include <string>
using namespace std;
class Student {
private:
	string _firstName;
	string _middleName;
	string _lastName;
public:
	string FirstName() { return _firstName;}
	string MiddleName() { return _middleName;}
	string LastName() { return _lastName;}
	
	void SetFN(string value) { _firstName = value; }
	void SetMN(string value) { _middleName = value; }
	void SetLN(string value) { _lastName = value; }

	string FullName()
	{
		return _firstName + " "+_middleName + " "+_lastName;
	}
public:
	Student();
	Student(string);
	Student(const Student &cpy);
	Student(string,string,string);
	~Student();
};
#endif