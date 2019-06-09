#include "Date.h"
// constructor
Date::Date()
{
	time_t now= time(0);
	tm *lt=localtime(&now);
	this->_year=1900 + lt->tm_year;
	this->_month=1 + lt->tm_mon;
	this->_day= lt->tm_mday;
}
Date::Date(int Year)
{
	this->_year=Year;
	this->_month = 1;
	this->_day = 1;

}
Date::Date(int Year,int Month)
{
	this->_year=Year;
	this->_month = Month;
	this->_day = 1;
}
Date::Date(int Year,int Month,int Day)
{
	this->_year=Year;
	this->_month = Month;
	this->_day = Day;
}
Date::Date(const Date& cpy)
{
	this->_year=cpy._year;
	this->_month = cpy._month;
	this->_day = cpy._day;
}
Date::~Date()
{
}
// 
bool Date::Day30(int Month)
{
	switch (Month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		return true;
		break;
	}
	return false;
}
bool Date::Day31(int Month)
{
	switch (Month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return true;
		break;
	}
	return false;
}
Date Date::Yesterday()
{
	Date temp= *this;
	temp._day -=1;
	if (temp._day == 0)
	{
		switch (temp._month)
			{
			case 1:
			case 2:
			case 4:
			case 8:
			case 9:
			case 11:
				temp._day=31;
				temp._month -=1;
				if ( temp._month ==0)
					temp._month=12;
				break;
			default:
				if( temp._month ==3 )
					if (temp._year %4 == 0 && temp._year % 400 !=0)
						temp._day=29;
					else
						temp._day=28;
				else
					temp._day=30;
				temp._month -=1;
				break;
			}
	}
	return temp;
}
Date Date::Tomorrow()
{
	Date temp = *this;
	temp._day+=1;
	if ( temp.Day30(temp._month) == true && temp._day >30)
		{		
			temp._day =1;
			temp._month+=1;
			
		}
	else if (temp.Day31(temp._month) == true && temp._day >31)
	{
		temp._day =1;
		temp._month+=1;
		if (temp._month == 13)
		{	
			temp._month=1;
			temp._year +=1;
		}
	}
	else if ( temp._month ==2)
	{
		int DayInFeb;
		if (temp._year %4 == 0 && temp._year % 400 != 0)
			DayInFeb = 29;
		else
			DayInFeb = 28;
		if (temp._day > DayInFeb)	
		{
			temp._day =1;
			temp._month+=1;

		}		
	}
	return temp;
}
/// operator
Date & Date::operator =(Date other)
{
	this->_day=other._day;
	this->_month=other._month;
	this->_year=other._year;
	return *this;
}
Date & Date::operator +=(int Day)
{
	*this = *this + Day;
	return *this;
}
Date & Date::operator -=(int Day)
{
	*this = *this - Day;

	return *this;
}
bool Date::operator !=(Date other)
{
	if (this->_day != other._day
	|| this->_month != other._month
	|| this->_year != other._year)
		return true;
	return false;
}
bool Date::operator ==(Date other)
{
	if (this->_day== other._day
	&& this->_month==other._month
	&&this->_year==other._year)
		return true;
	return false;
}
bool Date::operator >(Date other)
{
		if (this->_year > other._year)
			return true;
		else if (this ->_year == other._year)
		{
			if (this ->_month > other._month)
				return true;
			else if ( this ->_month == other._month)
			{
				if (this ->_day > other._day)
					return true;
			}
		}
	return false;
}
bool Date::operator <(Date other)
{
	if (this->_year < other._year)
			return true;
		else if (this ->_year == other._year)
		{
			if (this ->_month < other._month)
				return true;
			else if ( this ->_month == other._month)
			{
				if (this ->_day < other._day)
					return true;
			}
		}
	return false;
}
bool Date::operator >=(Date other)
{
	return (*this > other)|(*this == other);
}
bool Date::operator <=(Date other)
{
	return (*this < other)|(*this == other);
}
Date Date::operator +(int Day)
{
	Date temp = *this;
	bool loop= false;
	while (!loop)
	{
		if ( temp.Day30(temp._month) == true)
		{
			if (temp._day + Day <= 30)
			{
				temp._day +=Day;
				break;
			}
			else
			{
				Day= Day+ temp._day - 31;
				temp._day =1;
				temp._month+=1;
			}
		}
		else if (temp.Day31(temp._month) == true)
		{
			if (temp._day + Day <= 31)
			{
				temp._day +=Day;
				break;
			}
			else
			{
				Day= Day+ temp._day - 32;
				temp._day =1;
				temp._month+=1;
				if (temp._month == 13)
				{
					temp._month=1;
					temp._year +=1;
				}
			}
		}
		else if ( temp._month ==2)
		{
			int DayInFeb;
			if (temp._year %4 == 0 && temp._year % 400 != 0)
				DayInFeb = 29;
			else
				DayInFeb = 28;
			//
			if (temp._day + Day <= DayInFeb)
			{
				temp._day +=Day;
				break;
			}
			else
			{
				Day= Day+ temp._day - (DayInFeb +1);
				temp._day =1;
				temp._month+=1;
			}

		}
	}
	return temp;
}
Date Date::operator -(int Day)
{
	Date temp = *this;
	bool loop= false;
	while (!loop)
	{
		if (temp._day - Day >=1)
		{
			temp._day -= Day;
			break;
		}
		else
		{
			switch (temp._month)
			{
			case 1:
			case 2:
			case 4:
			case 8:
			case 9:
			case 11:
				Day= Day-temp._day;
				temp._day=31;
				temp._month -=1;
				if ( temp._month ==0)
					temp._month=12;
				break;
			default:
				Day - Day -temp._day;
				if( temp._month ==3 )
					if (temp._year %4 == 0 && temp._year % 400 !=0)
						temp._day=29;
					else
						temp._day=28;
				else
					temp._day=30;
				temp._month -=1;
				break;
			}
		}
	}
	return temp;
}
	//
Date Date::operator ++(int)
{
	Date temp=*this;
	*this = *this +1;
	return temp;
}
Date &Date::operator ++()
{
	*this = *this +1;
	return *this;
}
Date Date::operator --(int)
{
	Date temp=*this;
	*this = *this -1;
	return temp;
}

Date &Date::operator --()
{
	*this = *this -1;
	return *this;
}
ostream & operator <<(ostream &os, const Date &p)
{
	os <<p._day<<"/"<<p._month<<"/"<<p._year<<endl;
	return os;
}
istream & operator >>(istream &is, Date &p)
{
	cout<<"Enter day/month/year = ";
	is>>p._day>>p._month>>p._year;
	return is;
}
Date::operator int()
{
	int AbsDay=this->_day;
	for (int i = 1; i < this->_month; i++)
	{
		if (this->Day30(i))
			AbsDay +=30;
		else if (this ->Day31(i))
			AbsDay +=31;
		else if (_year % 4 == 0 && _year % 400 !=0)
			AbsDay +=29;
		else
			AbsDay +=28;
	}
	return AbsDay;
		
}
Date::operator long()
{
	long AbsDay=(int)*this;
	for (int i=1; i < this->_year; i++)
	{
		if (_year %4 == 0 && _year % 400 !=0)
			AbsDay +=366;
		else
			AbsDay +=365;
	}

	return AbsDay;
}