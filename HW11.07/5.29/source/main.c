#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main()
{
	int a, b;
	printf("Enter two integers:");
	scanf_s("%d%d", &a, &b);
	printf("The LCM is:%d\n", LCM(a,b));
	system("pause");
	return 0;
}

int GCD(int a, int b)
{
	if (b) while ((a %= b) && (b %= a));
	return a + b;
}
int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}