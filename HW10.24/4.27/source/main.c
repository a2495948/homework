#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int x, y, z,i,j,k;
	printf("x\ty\tz\t\n");
	printf("\n");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			k= (i * i) + (j * j);
			
			for (z = 1;z<=500;z++)
			{
				if (k == (z * z))
				{
					printf("%d\t", i);
					printf("%d\t", j);
					printf("%d\t\n", z);
				}

			}
		}
	}
	system("pause");
	return 0;
}