#include "Fraction.h"

int main()
{
	Fraction frac1;
	cout <<"Fraction 1 : "<<frac1.Num()<< "/"<<frac1.Den()<<endl;
	Fraction frac2(2,3);
	cout <<"Fraction 2 : "<<frac2.Num()<< "/"<<frac2.Den()<<endl;
	Fraction *frac3 = new Fraction(3,5);
	cout <<"Fraction 3 : "<<frac3->Num()<< "/"<<frac3->Den()<<endl;
	delete frac3;
	system("pause");
	return 0;
}