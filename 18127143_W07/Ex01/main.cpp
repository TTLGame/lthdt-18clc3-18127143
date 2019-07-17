#include <iostream>
using namespace std;
class Car
{
public:
	void StartEngine()
	{
		cout<<"Staring engine\n";
	}

};
class Carbriolet : public Car
{
	public:
	void StartEngine()
	{
		cout<<"Removing roof\n";
		Car::StartEngine();
	}
};
int main()
{
	Carbriolet car1;
	car1.StartEngine();
	system("pause");
	return 0;
}