#include <stdio.h>
#include <stdlib.h>

int h(int a, int b);


int main()
{
	int base, e;
	printf("Enter two integers(base  exponent):");
	scanf_s("%d%d", &base, &e);

	printf("The answer is:%d\n", h(base, e));
	system("pause");
	return 0;
}

int h (int a, int b)
{
	int i,n;
	n = 1;
	
	for (i = 1; i <= b; i++)
	{
		n = n * a;
	}
	return n;
		
}