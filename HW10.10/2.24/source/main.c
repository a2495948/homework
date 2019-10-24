#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("块计:");
	scanf_s("%d", &num);
	printf("块计琌:%d\n", num);

	if (num % 2 == 0)
		printf("%d 琌案计\n", num);
	else if(num % 2 == 1) 
		printf("%d 琌计\n", num);

	system("pause");
	return 0;
}