#include "Student.h"
int main()
{
	Student stu1;
	cout <<"Student 1 : "<<stu1.FirstName()<< " "<<stu1.MiddleName()<<" "<<stu1.LastName()<<endl;
	Student stu2("Trinh","Thanh","Long");
	cout <<"Student 2 : "<<stu2.FirstName()<< " "<<stu2.MiddleName()<<" "<<stu2.LastName()<<endl;
	Student *stu3 = new Student("Ho","Tuan","Thanh");
	cout <<"Student 3 : "<<stu3->FirstName()<< " "<<stu3->MiddleName()<<" "<<stu3->LastName()<<endl;
	delete stu3;
	system("pause");
	return 0;
}