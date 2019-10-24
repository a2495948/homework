#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	printf("number\t\tsquare\t\tcube\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%d\t\t%d\t\t%d\n",i,i*i,i*i*i);
	}
	system("pause");
	return 0;
}