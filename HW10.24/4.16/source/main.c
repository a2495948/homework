#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j<=i )
				printf("%c", sign);
		}
		printf("\n");
	}
	
	printf("(B)\n");
	for (i = 10; i > 0; i--)
	{
		for (j = 10; j>0; j--)
		{
			if (j <= i)
				printf("%c", sign);
		}
		printf("\n");
	}

	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 11; j++)
		{
			if (j <= i)
				printf("%c", sign2);
			else
				printf("%c", sign);

		}
		printf("\n");
	}

	printf("(D)\n");
	for (i = 1; i <= 10; ++i) {

		for (j = 10; j > i; --j) {

			printf(" ");

		}

		for (j = 1; j <= i; ++j) {

			printf("%s", "*");

		}

		printf("\n");
	}
	
	
	system("pause");
	return 0;
}