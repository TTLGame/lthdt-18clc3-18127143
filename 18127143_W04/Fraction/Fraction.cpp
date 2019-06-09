
#include"Fraction.h"
Fraction::Fraction()
{
	this->_num=0;
	this->_denom = 1;
}
Fraction::Fraction(int Num, int Denom)
{
	this->_num=Num;
	this->_denom = Denom;
}
Fraction::Fraction(const Fraction &p)
{
	this->_denom=p._denom;
	this->_num=p._num;
}
Fraction::~Fraction()
{
	
}

Fraction Fraction::operator +(Fraction p)
{
	Fraction temp;
	temp._denom = this->_denom*p._denom;
	temp._num = this->_num*p._denom + this->_denom*p._num;
	return temp;
}
Fraction Fraction::operator +(int x)
{
	Fraction temp;
	temp._denom = this->_denom;
	temp._num = this->_num + this->_denom * x;
	return temp;
}
Fraction Fraction::operator -(int x)
{
	Fraction temp;
	temp._denom = this->_denom;
	temp._num = this->_num - this->_denom * x;
	return temp;
}

Fraction operator +(int x,Fraction p)
{
	Fraction temp;
	temp._denom = p._denom;
	temp._num = p._num + p._denom * x;
	return temp;
}

Fraction operator *(int x,Fraction p)
{
	Fraction temp;
	temp._denom = p._denom;
	temp._num = p._num* x;
	return temp;
}
Fraction Fraction::operator *(Fraction p)
{
	Fraction temp;
	temp._denom = this->_denom*p._denom;
	temp._num = this->_num*p._num;
	return temp;
}
Fraction Fraction::operator -(Fraction p)
{
	Fraction temp;
	temp._denom = this->_denom*p._denom;
	temp._num = this->_num*p._denom - this->_denom*p._num;
	return temp;
}
Fraction Fraction::operator /(Fraction p)
{
	Fraction temp;
	temp._denom = this->_denom*p._num;
	temp._num = this->_num*p._denom;
	return temp;
}
bool Fraction::operator >(Fraction p)
{
	if (1.0*this->_num / this->_denom > 1.0*p._num / p._denom) 
		return true;
	else 
		return false;
}
bool Fraction::operator <(Fraction p)
{
	if (1.0*this->_num / this->_denom < 1.0*p._num / p._denom) 
		return true;
	else 
		return false;
}
bool Fraction::operator ==(Fraction p)
{
	if (this->_num*p._denom == p._num * this->_denom) 
		return true;
	else 
		return false;
}
bool Fraction::operator >=(Fraction p)
{
	if (*this > p || *this == p) return true;
	else return false;
}
bool Fraction::operator <=(Fraction p)
{
	if (*this <p || *this == p) return true;
	else return false;
}
bool  Fraction::operator !=(Fraction p)
{
	if (*this == p) return false;
	else return true;
}

Fraction& Fraction::operator =(const Fraction &p)
{
	if (this == &p) return *this;
	else
	{
		this->_denom = p._denom;
		this->_num = p._num;
	}
	return *this;
}
Fraction& Fraction::operator +=(const Fraction &p)
{
	*this = *this + p;
	return *this ;
}
Fraction& Fraction::operator *=(const Fraction &p)
{
	*this = *this*p;
	return *this;
}
Fraction& Fraction::operator -=(const Fraction &p)
{
	*this = *this - p;
	return *this ;
}
Fraction& Fraction::operator /=(const Fraction &p)
{
	*this = *this/p;
	return *this;
}

Fraction& Fraction::operator ++() 
{
	*this = *this + Fraction(1,1);
	return *this;
}
Fraction Fraction::operator ++(int x)
{
		Fraction temp = *this;
		*this = *this + Fraction(1, 1);
		return temp;
	
}
Fraction& Fraction::operator --()
{
	*this = *this + Fraction(-1, 1);
	return *this;
}
Fraction Fraction::operator --(int x)
{
	Fraction temp = *this;
	*this = *this + Fraction(-1, 1);
	return temp;
}

ostream& operator <<(ostream &os, const Fraction &p)
{
	if (p._denom == 0)
		throw "Divine by zero exception\n";
	os << p._num << "/" << p._denom<<endl;
	return os;
}
istream& operator >>(istream &is, Fraction &p)
{
	cout << "Enter Num =  ";
	is >> p._num;
	cout << "Enter Denom =: ";
	is >> p._denom;
	return is;
}

