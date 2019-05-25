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