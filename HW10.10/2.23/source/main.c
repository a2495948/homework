#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("��J�T�ӼƦr,�N���O��ܥX�̤j�M�̤p:\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�A��J���Ʀr�O:%d %d %d �H�U���̤j�M�̤p��:\n", num1, num2, num3);

	if (num1 == num2&&num2 == num3)
	{
		printf("�T�̬ҬۦP\n");
	}
	else if (num1 != num2 != num3)
	{   
	    
		    
	   
		if (num1 > num2 && num2 > num3)
		{
			printf("�̤j�Ȭ�:%d �̤p�Ȭ�:%d\n", num1, num3);
		}

		if (num1 < num2 && num2 < num3)
		{
			printf("�̤j�Ȭ�:%d �̤p�Ȭ�:%d\n", num3, num1);
		}

		if (num2 > num1 && num1 > num3)
		{
			printf("�̤j�Ȭ�:%d �̤p�Ȭ�:%d\n", num2, num3);
		}

		if (num2 < num1 && num1 < num3)
		{
			printf("�̤j�Ȭ�:%d �̤p�Ȭ�:%d\n", num3, num2);
		}

		if (num1 > num3 && num3 > num2)
		{
			printf("�̤j�Ȭ�:%d �̤p�Ȭ�:%d\n", num1, num2);
		}

		if (num1 < num3 && num3 < num2)
		{
			printf("�̤j�Ȭ�:%d �̤p�Ȭ�:%d\n", num2, num1);
		}

		
	}

	system("pause");
	return 0;
}