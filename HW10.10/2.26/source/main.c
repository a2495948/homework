#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

		printf("��J��ӼƦr:");
		scanf_s("%d %d", &num1, &num2);
		printf("�A��J���Ʀr�O:%d %d\n", num1, num2);

		if (num1 % num2 == 0)
		{
			printf("%d �O %d ������\n", num1, num2);
		}
		else 
		{
			printf("%d ���O %d ������\n", num1, num2);
		}
		system("pause");
		return 0;

}