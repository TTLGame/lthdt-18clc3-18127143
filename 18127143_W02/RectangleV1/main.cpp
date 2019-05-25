#include "Rectangle.h"

int main()
{
	Rectangle rect1;
	cout <<"Rectangle 1 : "<<rect1.topLeft().X()<< ","<<rect1.topLeft().Y()<<"\t"<<rect1.bottomRight().X()<<","<<rect1.bottomRight().Y()<<endl;
	Rectangle rect2(Point(2,3),Point(3,3));
	cout <<"Rectangle 2 : "<<rect2.topLeft().X()<< ","<<rect2.topLeft().Y()<<"\t"<<rect2.bottomRight().X()<<","<<rect2.bottomRight().Y()<<endl;
	Rectangle *rect3 = new Rectangle(Point(5,5),Point(10,2));
	cout <<"Rectangle 3 : "<<rect3->topLeft().X()<< ","<<rect3->topLeft().Y()<<"\t"<<rect3->bottomRight().X()<<","<<rect3->bottomRight().Y()<<endl;
	delete rect3;
	system("pause");
	return 0;
}