#include <stdio.h>
#include <stdlib.h>

int binarysearch(int data[], int search, int n);

int main()
{
	int anws, search;
	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("��J�n�j�M����:");
	scanf_s("%d", &search);
	anws=binarysearch(data,search , sizeof(data));

	if (anws < 0)
	{
		printf("�䤣��%d\n", search);
	}
	else
	{
		printf("�b�� %d ����Ƥ���� %d\n", anws + 1, search);
	}
	system("pause");
	return 0;
}

int binarysearch(int data[], int search, int n)
{
	int low = 0, high = n - 1;
	
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (data[mid] == search)
		{
			return mid;
		}
		else if (data[mid] > search)
		{
			high = mid - 1;
		}
		else if (data[mid] < search)
		{
			low = mid + 1;
		}
	}
	return -1;
}
