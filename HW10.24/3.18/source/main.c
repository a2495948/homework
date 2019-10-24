#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while(1)
	{
		float sales, salary;
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &sales);
		if (sales == -1)
		{
			break;
		}
		salary = (sales * 0.09 + 200);
		printf("Salary is:$%f\n", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}