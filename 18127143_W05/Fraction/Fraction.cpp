#include "Fraction.h"
Fraction::Fraction()
{
	this->_num = 0;
	this->_den = 1;
}
Fraction::Fraction(int x,int y)
{
	this ->_num = x;
	this ->_den = y;
}
Fraction::~Fraction()
{

}
Fraction::Fraction(const Fraction & cpy)
{
	this ->_num = cpy._num;
	this ->_den = cpy._den;
}
string Fraction::ToString()
{
	stringstream writer;
	writer<<_num<<"/"<<_den<<endl;
	return writer.str();
}