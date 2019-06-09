#pragma once
#include<iostream>
using namespace std;
class Fraction {
private:
	int _denom;
	int _num;
public:

	Fraction();
	Fraction(int, int);
	Fraction(const Fraction &p);
	~Fraction();
public:
	Fraction operator *(Fraction p);
	Fraction operator +(Fraction p);
	Fraction operator -(Fraction p);
	Fraction operator /(Fraction p);
	friend Fraction operator +(int x,Fraction p);
	friend Fraction operator *(int x,Fraction p);
	Fraction operator +(int x);
	Fraction operator -(int x);
	bool operator >(Fraction p);
	bool operator <(Fraction p);
	bool operator ==(Fraction p);
	bool operator >=(Fraction p);
	bool operator <=(Fraction p);
	bool operator !=(Fraction p);
	Fraction& operator =(const Fraction &p);
	Fraction& operator +=(const Fraction &p);
	Fraction& operator *=(const Fraction &p);
	Fraction& operator -=(const Fraction &p);
	Fraction& operator /=(const Fraction &p);
	operator float() 
	{
		return	1.0*this->_num / this->_denom;
	}
	operator int() 
	{
		return this->_num / this->_denom;
	}
	Fraction& operator ++();
	Fraction operator ++(int x);
	Fraction& operator --();
	Fraction operator --(int x);

	friend ostream & operator <<(ostream &os, const Fraction &p);
	friend istream & operator >>(istream &is,  Fraction &p);
};

