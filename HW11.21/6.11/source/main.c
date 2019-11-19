#include <stdio.h>
#include <stdlib.h>
#define element 10

void bubble(int a[], int b);

int main()
{
	int a[element] = { 1,5,3,2,4,10,6,8,9,7 };
	int b = 10;
	int i;
	for (i = 0; i < b; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n\n");

	bubble(a, b);

	for (i = 0; i < b; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

void bubble(int a[], int b)
{
	int i, j, temp, c = 1;
	for (i = 0; c && i < (b-1); i++)
	{
		for (j = 0; j < (b - 1 - i); j++)
		{
			c = 0;
			if (a[j] > a[j + 1])

			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				c = 1;
			}
		}
	}

}
