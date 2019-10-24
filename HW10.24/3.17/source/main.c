#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int i;
	while (1)
	{
		float  balance, charges, credits, limit;
		int accountnumber;

		printf("Enter account number (-1 to end):");
		scanf_s("%d", &accountnumber);
		if(accountnumber==-1)
		{
			break;
		}
		printf("Enter begining balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);

		float newbalance;
		newbalance = (balance + charges - credits);
		printf("Account:\t%d\n", accountnumber);
		printf("Credit limit:\t%f\n", limit);
		printf("Balance:\t%f\n", newbalance);
		if (newbalance > balance)
			printf("Credits limit exceeded\n");
		printf("\n");

	}
	system("pause");
	return 0;
}