
#include "Array.h"

int main()
{
	// Using dynamic allocated array
	IntArray m1;
	IntArray m2(7);
	int a[100];
	int n=7;
	for(int i=0;i<n;i++)
	{
		a[i]=i*2/7;
	}
	IntArray m3(a,n);
	IntArray m4(m2);
	IntArray m5;
	m5=m2;

	cin>>m2;
	cout<<m2;

	try{
	cout<<m3[7];
	}
	catch (const char * s){
		cout<<s;
	}
	try{
	m3[7]=1;
	}
	catch (const char * s){
		cout<<s;
	}
	
	cout<<(int)m4;
	system("pause");
	return 0;
}