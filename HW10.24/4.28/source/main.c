#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Pleace enter 1 => 2 => 3 =>4 ,if worker have no payment: Enter '0' after enter paycode\n");
	printf("1:(manager)  2:(hourly worker)   3:(commission worker)   4:(piece worker) \n");
	int i,a=0;
	float manager=0, hourlyworker=0, commissionworker=0, pieceworker=0 ,total=0;
	while (1)
	{
		printf("Enter paycode(-1 to end):");
		scanf_s("%d", &i);
		if (i == -1)
		{
			return 0;
		}
		else if (i == 1)
		{
			printf("(manager) :your payment is: ");
			scanf_s("%f", &manager);
			printf("\n");
			a++;
		}
		else if (i == 2)
		{
			printf("(hourly worker) :your payment is: ");
			scanf_s("%f", &hourlyworker);
			printf("\n");
			a++;
		}
		else if (i == 3)
		{
			commissionworker = 250 + 250 * 0.057;
			printf("(commission worker) :your payment is:%f", commissionworker);
			
			printf("\n");
			a++;
		}
		else if (i == 4)
		{
			printf("(pieceworker) :your payment is: ");
			scanf_s("%f", &pieceworker);
			printf("\n");
			a++;
		}
		if (a == 4)
		{
			total = (manager + hourlyworker + commissionworker + pieceworker);
			printf("Total payment is :$%f\n", total);
		}
	}
			system("pause");
			return 0;

}