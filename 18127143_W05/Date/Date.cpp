#include "Date.h"
Date::Date()
{
	this->_year = 1;
	this->_month = 1;
	this ->_day =1;
}
Date::Date(int d,int m,int y)
{
	this->_year = y;
	this->_month = m;
	this ->_day =d;
}
Date::~Date()
{

}
Date::Date(const Date & cpy)
{
	this->_year = cpy._year;
	this->_month = cpy._month;
	this ->_day = cpy._day;
}
string Date::ToString()
{
	stringstream writer;
	writer<<_day<<"/"<<_month<<"/"<<_year;
	return writer.str();
}