#include "Circle.h"

int main()
{
	Circle cir1;
	cout <<"Circle 1 : "<<cir1.Center().X()<< ","<<cir1.Center().Y()<<"\t"<<cir1.Radius()<<endl;
	Circle cir2(Point(2,3),3);
	cout <<"Circle 2 : "<<cir2.Center().X()<< ","<<cir2.Center().Y()<<"\t"<<cir2.Radius()<<endl;
	Circle *cir3 = new Circle(Point(5,5),10);
	cout <<"Circle 3 : "<<cir3->Center().X()<< ","<<cir3->Center().Y()<<"\t"<<cir3->Radius()<<endl;
	delete cir3;
	system("pause");
	return 0;
}