#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, t1 = 0, t2 = 1, next;
	printf("Enter the number of terms:");
	scanf_s("%d", &n);

	printf("Fibonacci Series: ");
	
		for (i = 1; i <= n; i++)
		{
			printf("%d  ", t1);
			next = t1 + t2;
			t1 = t2;
			t2 = next;

		}
		printf("\n");

		system("pause");
		return 0;
}