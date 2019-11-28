#include <stdio.h>
#include <stdlib.h>

void cubebyreference(int& nPtr);

int main()
{
	int number = 5;
	printf("The original value of number is %d\n", number);

	cubebyreference(number);

	printf("The new value of number is %d\n", number);

	system("pause");
	return 0;
}

void cubebyreference(int& nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}
