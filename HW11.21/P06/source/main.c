#include <stdio.h>
#include <stdlib.h>
#define size 10

int main()
{
	int n[size];
	int i;

	for (i = 0; i < size; i++)
	{
		n[i] = 2 + 2 * i;
	}
	printf("%s%13s\n", "element", "value");

	for (i = 0; i < size; i++)
	{
		printf("%7d%13d\n", i, n[i]);
	}

	system("pause");
	return 0;
}