#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   long double allmile, gasprice, drive, parkprice, passprice;

	printf(" 一整天的總里程數: ");
	scanf_s("%lf", &allmile);

	printf(" 汽油一公升/加侖多少錢 :");
	scanf_s("%lf", &gasprice);

	printf("平均一公升/加侖能行駛多少公里 :");
	scanf_s("%lf", &drive);

	printf("一天的停車費 :");
	scanf_s("%lf", &parkprice);

	printf("一天的通行費(過路費) :");
	scanf_s("%lf", &passprice);

	printf("\n\n");


	printf("一天下來開車去工作的花費: ");
	printf("%lf\n", (allmile / drive) * gasprice + parkprice + passprice);



	system("pause");
	return 0;

}