#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (1)
	{
		float principal, interest, rate, days;
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &principal);
		if (principal==-1)
		{
			break;
		}
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &days);
		interest = principal * rate * days / 365;
		printf("The interest charge is $%f\n", interest);
		printf("\n");
	}
	system("pause");
	return 0;

}