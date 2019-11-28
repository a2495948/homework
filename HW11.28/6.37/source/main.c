#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[100] = {0}, size, i, largest;
	printf("請輸入array的大小:");
	scanf_s("%d", &size);

	printf("請輸入array的值:");
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &array[i]);
	}

	largest = array[0];

	for (i = 0; i < size; i++)
	{
		if (array[i] > largest)
			largest = array[i];
	}

	printf("在array中最大的數是:%d\n", largest);

	system("pause");
	return 0;


}

