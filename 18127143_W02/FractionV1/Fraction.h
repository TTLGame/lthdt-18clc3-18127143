#ifndef _FRACTION_H_
#define _FRACTION_H_
#include <iostream>
using namespace std;
class Fraction {
private:
	int _num;
	int _den;
public:
	float Num() { return _num;}
	float Den() { return _den;}
	void SetNum(int value) { _num = value; }
	void SetDen(int value) { _den = value; }
public:
	Fraction();
	Fraction(int,int);
	~Fraction();
};
#endif