#include <stdio.h>
#include <stdlib.h>

int main()
{
	float  rate[5] = { 10.0,10.5,11.0,11.5,12.0, }, principal = 5000;
	for (int x = 0; x < 5; x++)
	{
		for (int i = 0; i < 15; i++)
		{
			principal = principal + principal * rate[x] / 100;
		}
		printf("本金 $5000 ，年利率%.1f%%，經過15年，總金額為$%.2f\n", rate[x], principal);
		principal = 5000.00;
	}
	system("pause");
	return 0;
}