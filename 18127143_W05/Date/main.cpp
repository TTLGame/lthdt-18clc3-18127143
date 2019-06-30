#include "Date.h"

int main()
{
	Date date1 = Date::Parse("24/12/2018");
	cout<<date1.ToString()<<endl;
	system("pause");
	return 0;
}