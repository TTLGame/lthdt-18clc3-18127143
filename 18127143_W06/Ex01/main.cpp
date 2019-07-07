#include "company.h"
int main()
{
	NVSanXuat NV1;
	NV1.InputInfo();
	NV1.OutputInfo();
	float money = NV1.CalSalary();
	system("pause");
	return 0;
}