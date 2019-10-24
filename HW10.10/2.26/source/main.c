#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

		printf("块ㄢ计:");
		scanf_s("%d %d", &num1, &num2);
		printf("块计琌:%d %d\n", num1, num2);

		if (num1 % num2 == 0)
		{
			printf("%d 琌 %d 计\n", num1, num2);
		}
		else 
		{
			printf("%d ぃ琌 %d 计\n", num1, num2);
		}
		system("pause");
		return 0;

}