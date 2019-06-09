#include "Array.h"

ostream & operator <<(ostream &os, const IntArray &p)
	{
		for (int i =0; i <p._size; i++)
			os<<p.arr[i]<<" ";
		os<<endl;
		return os;
	}
istream & operator >>(istream &is,  IntArray &p)
	{
		cout<<"Enter array size = ";
		is>>p._size;
		p.arr = new int[p._size];
		for (int i = 0 ; i < p._size; i ++)
		{
			cout<<"Enter arr["<<i<<"] = ";
			is >>p.arr[i];
		}
		return is;
	}

IntArray::IntArray()
{
	_size =0;
	arr = new int[0];
}
IntArray::IntArray(int Size)
{
	_size =Size;
	arr = new int[Size];
	for (int i = 0; i < Size; i++)
		arr[i]=0;
}
IntArray::IntArray(int *Arr,int Size)
{
	_size =Size;
	arr = new int[Size];
	for (int i = 0; i < Size; i++)
		arr[i]=Arr[i];
}
IntArray::~IntArray()
{
	delete []arr;
}
IntArray &IntArray::operator=(const IntArray &p)
{
	delete []arr;
	arr = new int[p._size];
	_size = p._size;
	for (int i = 0 ; i < _size; i ++)
		arr[i]=p.arr[i];
	return *this;
}
int &IntArray::operator[](int index)
{
	if (index >= this->_size)
		throw "Invalid Index\n"; 

	return arr[index];
}
IntArray::operator int()
{
	return this->_size;
}