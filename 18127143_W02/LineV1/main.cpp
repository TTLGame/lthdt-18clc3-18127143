#include "Point.h"
#include "Line.h"

int main()
{
	Line line;
	cout <<"Line 1 : "<<line.start().X()<< ","<<line.start().Y()<<"\t"<<line.end().X()<<","<<line.end().Y()<<endl;
	Line line1(Point(2,3),Point(3,3));
	cout <<"Line 2 : "<<line1.start().X()<< ","<<line1.start().Y()<<"\t"<<line1.end().X()<<","<<line1.end().Y()<<endl;
	Line *line2 = new Line(Point(5,5),Point(10,2));
	cout <<"Line 3 : "<<line2->start().X()<< ","<<line2->start().Y()<<"\t"<<line2->end().X()<<","<<line2->end().Y()<<endl;
	system("pause");
	return 0;
}