#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Pleace enter 1 => 2 => 3 ,if worker have no payment: Enter '0' after enter paycode\n");
	printf(" 1:(hourly worker)   2:(commission worker)   3:(piece worker) \n");
	int i,a=0;
	float manager=0, hourlyworker=0, commissionworker=0, pieceworker=0;
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
			printf("(hourly worker) :your payment is: ");
			scanf_s("%f", &hourlyworker);
			printf("\n");
			a++;
		}
		else if (i == 2)
		{
			commissionworker = 250 + 250 * 0.057;
			printf("(commission worker) :your payment is:%f", commissionworker);
			
			printf("\n");
			a++;
		}
		else if (i == 3)
		{
			printf("(pieceworker) :your payment is: ");
			scanf_s("%f", &pieceworker);
			printf("\n");
			a++;
		}
		if (a == 3)
		{
			manager = (hourlyworker + commissionworker + pieceworker);
			printf("Manager need to pay :%f\n", manager);
		}
	}
			system("pause");
			return 0;

}