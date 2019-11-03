#include <stdio.h>
#include <stdlib.h>


int main()
{
	char i;
	printf("Enter the alphabet:");
	scanf_s("%c", &i);
	if ((i >= 'A') && (i <= 'Z'))
	{
		i = i + 32;
		printf("%c\n", i);
	}
	 else if ((i >='a') &&( i <='z'))
	{
		i = i - 32;
		printf("%c\n", i );
	}
	system("pause");
	return 0;
}