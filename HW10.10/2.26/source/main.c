#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

		printf("輸入兩個數字:");
		scanf_s("%d %d", &num1, &num2);
		printf("你輸入的數字是:%d %d\n", num1, num2);

		if (num1 % num2 == 0)
		{
			printf("%d 是 %d 的倍數\n", num1, num2);
		}
		else 
		{
			printf("%d 不是 %d 的倍數\n", num1, num2);
		}
		system("pause");
		return 0;

}