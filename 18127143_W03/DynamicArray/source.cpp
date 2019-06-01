#include "header.h"
void Array::PushBack(int value)
{
	a[_len++]=value;
}
int Array::GetAt(int index)
{
	return a[index];
}

Array::Array()
{
	_len=0;
	_max=128;
	a =new int [_max];
}
Array::Array(const Array &cpy)
{
	a = new int[_max];
	for (int i =0; i< _max; i++)
		a[i] = cpy.a[i];
	_len=cpy._len;
	_max=cpy._max;
}
Array::Array(int *arr,int len,int max)
{
	_len=len;
	_max=max;
	a= new int [_max];
	for (int i =0; i< _len; i++)
		a[i] = arr[i];
	_len=len;
	_max=max;
}
Array::Array(int n)
{
	_max = 128;
	a= new int [_max];
	_len =n;
	for (int i =0; i< _len; i++)
		a[i] = 0;
}
Array::~Array()
{
	delete []a;
}