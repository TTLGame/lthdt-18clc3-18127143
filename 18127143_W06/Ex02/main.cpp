#include "university.h"
int main()
{
	HRTeacher hrt1;
	hrt1.Output();
	float salary = hrt1.CalSalary();
	cout<<salary<<endl;
	system("pause");
	return 0;
}