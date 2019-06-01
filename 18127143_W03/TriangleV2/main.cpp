#include "Triangle.h"

int main()
{
	
	Triangle tri1;
	cout<<"Triangle 1: Area : "<<tri1.CalArea()<<" Perimeter  : "<<tri1.CalPerimeter()<<endl;
	Point *a =new Point(3,2);
	Point *b =new Point(10,10);
	Point *c =new Point(5,2);
	Triangle tri2(a,b,c);
	cout<<"Triangle 2: Area : "<<tri2.CalArea()<<" Perimeter  : "<<tri2.CalPerimeter()<<endl;
	a=new Point(5,5);
	Triangle tri3(a);
	cout<<"Triangle 3: Area : "<<tri3.CalArea()<<" Perimeter  : "<<tri3.CalPerimeter()<<endl;
	system("pause");
	return 0;
}