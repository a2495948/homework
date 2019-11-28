#include <stdio.h>
#include <stdlib.h>

int cubebyvalue(int n);

int main()
{
	int number = 5;
	printf("The original value of number is %d\n", number);

	number = cubebyvalue(number);

	printf("the new value of number is %d\n", number);
	system("pause");
	return 0;
}

int cubebyvalue(int n)
{
	return n * n * n;
}