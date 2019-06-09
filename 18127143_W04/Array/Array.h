#include <iostream>
using namespace std;

class IntArray
{
private:
	int _size;
	int *arr;
public:
	IntArray();
	IntArray(int);
	IntArray(int *,int);
	~IntArray();
public:
	IntArray & operator =(const IntArray &p);
	int & operator [](int index);
	friend ostream & operator <<(ostream &os, const IntArray &p);
	operator int();
	friend istream & operator >>(istream &is,  IntArray &p);

};