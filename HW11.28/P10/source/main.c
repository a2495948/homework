#include <stdio.h>
#include <stdlib.h>

void cubebyaddress(int* nPtr);

int main()
{
	int number = 5;
	printf("The original value of number is %d", number);

	cubebyaddress(&number);

	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

void cubebyaddress(int* nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}