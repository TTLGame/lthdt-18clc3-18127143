#include "Triangle.h"

int main()
{
	Triangle tri1;
	cout <<"Triangle 1 : "<<tri1._A().X()<< ","<<tri1._A().Y()<<"\t"<<tri1._B().X()<<","<<tri1._B().Y()<<"\t"<<tri1._C().X()<<","<<tri1._C().Y()<<endl;
	Triangle tri2(Point(2,3),Point(3,3),Point(4,5));
	cout <<"Triangle 2 : "<<tri2._A().X()<< ","<<tri2._A().Y()<<"\t"<<tri2._B().X()<<","<<tri2._B().Y()<<"\t"<<tri2._C().X()<<","<<tri2._C().Y()<<endl;
	Triangle *tri3 = new Triangle(Point(5,5),Point(10,2),Point(10,3));
	cout <<"Triangle 3 : "<<tri3->_A().X()<< ","<<tri3->_A().Y()<<"\t"<<tri3->_B().X()<<","<<tri3->_B().Y()<<"\t"<<tri3->_C().X()<<","<<tri3->_C().Y()<<endl;
	delete tri3;
	system("pause");
	return 0;
}