#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[100] = {0}, size, i, largest;
	printf("�п�Jarray���j�p:");
	scanf_s("%d", &size);

	printf("�п�Jarray����:");
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

	printf("�barray���̤j���ƬO:%d\n", largest);

	system("pause");
	return 0;


}

