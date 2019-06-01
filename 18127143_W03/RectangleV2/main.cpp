#include "Rectangle.h"

int main()
{
	Rectangle rect1;
	cout<<"Rectangle 1 : Area : "<<rect1.CalcArea()<<" Perameter : "<<rect1.CalcPerimeter()<<endl;
	Point *topLeft= new Point(3,2);
	Point *bottomRight = new Point (10,11);
	Rectangle rect2(topLeft,bottomRight);
	cout<<"Rectangle 2 : Area : "<<rect2.CalcArea()<<" Perameter : "<<rect2.CalcPerimeter()<<endl;
	topLeft= new Point(3,2);
	Rectangle rect3(topLeft);
	//cout<<"Rectangle 3 : Area : "<<rect3.CalcArea()<<" Perameter : "<<rect3.CalcPerimeter()<<endl;
	system("pause");
	return 0;
}