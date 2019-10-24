#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("块计,盢だ陪ボ程㎝程:\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("块计琌:%d %d %d 程㎝程:\n", num1, num2, num3);

	if (num1 == num2&&num2 == num3)
	{
		printf("\n");
	}
	else if (num1 != num2 != num3)
	{   
	    
		    
	   
		if (num1 > num2 && num2 > num3)
		{
			printf("程:%d 程:%d\n", num1, num3);
		}

		if (num1 < num2 && num2 < num3)
		{
			printf("程:%d 程:%d\n", num3, num1);
		}

		if (num2 > num1 && num1 > num3)
		{
			printf("程:%d 程:%d\n", num2, num3);
		}

		if (num2 < num1 && num1 < num3)
		{
			printf("程:%d 程:%d\n", num3, num2);
		}

		if (num1 > num3 && num3 > num2)
		{
			printf("程:%d 程:%d\n", num1, num2);
		}

		if (num1 < num3 && num3 < num2)
		{
			printf("程:%d 程:%d\n", num2, num1);
		}

		
	}

	system("pause");
	return 0;
}