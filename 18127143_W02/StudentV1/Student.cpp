#include "Student.h"
Student::Student()
{
	this->_firstName = "Nguyen";
	this->_middleName = "Van";
	this->_lastName ="A";
}
Student::Student(string FN, string MN,string LN)
{
	this ->_firstName = FN;
	this ->_middleName = MN;
	this ->_lastName = LN;
}
Student::~Student()
{

}