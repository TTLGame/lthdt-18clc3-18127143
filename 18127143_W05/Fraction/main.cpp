#include "Fraction.h"

int main()
{
	Fraction frac1 = Fraction::Parse("6/12");
	cout<<frac1.ToString();
	system("pause");
	return 0;
}