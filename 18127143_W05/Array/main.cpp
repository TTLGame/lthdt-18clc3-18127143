#include "Array.h"
int main()
{
	Array arr = Array::Purse("5, 8, 12, 15, 612, 19");
	cout<<arr.ToString()<<endl;
	system("pause");
	return 0;
}