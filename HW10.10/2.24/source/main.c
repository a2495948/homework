#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("��J�@�ӼƦr:");
	scanf_s("%d", &num);
	printf("�A��J���Ʀr�O:%d\n", num);

	if (num % 2 == 0)
		printf("%d �O����\n", num);
	else if(num % 2 == 1) 
		printf("%d �O�_��\n", num);

	system("pause");
	return 0;
}