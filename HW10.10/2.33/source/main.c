#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   long double allmile, gasprice, drive, parkprice, passprice;

	printf(" �@��Ѫ��`���{��: ");
	scanf_s("%lf", &allmile);

	printf(" �T�o�@����/�[�ڦh�ֿ� :");
	scanf_s("%lf", &gasprice);

	printf("�����@����/�[�گ��p�h�֤��� :");
	scanf_s("%lf", &drive);

	printf("�@�Ѫ������O :");
	scanf_s("%lf", &parkprice);

	printf("�@�Ѫ��q��O(�L���O) :");
	scanf_s("%lf", &passprice);

	printf("\n\n");


	printf("�@�ѤU�Ӷ}���h�u�@����O: ");
	printf("%lf\n", (allmile / drive) * gasprice + parkprice + passprice);



	system("pause");
	return 0;

}