#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (1)
	{
		float hours, rate, salary;
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hours);
		if (hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &rate);
		salary = hours * rate;
		printf("Salary is $%f\n", salary);
		printf("\n");
		
	}
	system("pause");
	return 0;
}