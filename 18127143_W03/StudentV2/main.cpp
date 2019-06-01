#include "Student.h"
int main()
{
	Student stu1;
	cout <<"Student 1 : "<<stu1.FullName()<<endl;
	Student stu2("Trinh","Thanh","Long");
	cout <<"Student 2 : "<<stu2.FullName()<<endl;
	Student *stu3 = new Student("Long");
	cout <<"Student 3 : "<<stu3->FullName()<<endl;
	delete stu3;
	system("pause");
	return 0;
}