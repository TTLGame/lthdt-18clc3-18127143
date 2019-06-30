#include "Point.h"
#include "Line.h"

int main()
{
	Line line;
	line = Line::Parse("(3, 4), (5, 9)");
	cout <<"line 1 : "<<line.ToString()<<endl;
	

	
	system("pause");
	return 0;
}