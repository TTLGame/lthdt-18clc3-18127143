#ifndef _ARRAY_H_
#define _ARRAY_H_
#include<iostream>
using namespace std;
class Array
{
private:
	const int INITIAL_SIZE = 128;
private:
	int *a;
	int _len;
	int _max;
public:
	void PushBack(int value);
	int GetAt(int index);
public:
	Array();
	Array(const Array &cpy);
	Array(int *,int,int);
	Array(int);
	~Array();
};
#endif