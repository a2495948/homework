#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 && j == 5||i==1&&(j==4||j==5||j==6)||i==2&&(j==3||j == 4 || j == 5 || j == 6||j==7)
				||i==3&&(j==2||j == 3 || j == 4 || j == 5 || j == 6 || j == 7||j==8)||i==4&&(j==1||j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8||j==9||j==10)|| i == 5 && (j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8)|| i == 6 && (j == 3 || j == 4 || j == 5 || j == 6 || j == 7)|| i == 7 && (j == 4 || j == 5 || j == 6)|| i == 8 && j == 5)
				printf("%c", sign);
			else
				printf("%c", sign2);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}