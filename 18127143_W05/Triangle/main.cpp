#include "Triangle.h"

int main()
{
	Triangle tri1 = Triangle::Parse("(6, 15), (1, 20), (61, 92)");
	cout<<tri1.ToString()<<endl;
	system("pause");
	return 0;
}