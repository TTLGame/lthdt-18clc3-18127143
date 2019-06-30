#include "Array.h"
Array::Array()
{
	_len = 0;
	a = new int [_len];
}
Array::Array(const Array &cpy)
{
	a = new int [cpy._len];
	_len = cpy._len;
	for (int i =0; i< _len; i++)
		a[i] = cpy.a[i];
}
Array::Array(int *arr,int len)
{
	_len=len;
	a= new int [_len];
	for (int i =0; i< _len; i++)
		a[i] = arr[i];
}
Array::Array(int n)
{
	a= new int [n];
	_len =n;
	for (int i =0; i< _len; i++)
		a[i] = 0;
}
Array::~Array()
{
	delete []a;
}
string Array::ToString()
{
	stringstream writer;
	for (int i = 0; i < _len; i++)
		writer<<a[i]<<" ";
	return writer.str();
}
Array & Array::operator = (Array p)
{
	delete []a;
	a = new int [p._len];
	_len = p._len;
	for (int i = 0; i < _len; i++)
		a[i] = p.a[i];
	return *this;
}