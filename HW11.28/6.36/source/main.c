
#include <stdio.h>
#include <stdlib.h>

void change(char str[]);

int main(int argc, char* argv[])
{
	char str[50];

	printf("請輸入一個字串:");
	gets(str);
	change(str);

	system("pause");
	return 0;
}
void change(char str[])
{
	int i, j=0;
	for (i = 0; str[i] != '\0'; i++);
	
		printf("轉換後的字串:");
		for (j = i - 1; j >= 0; j--)
		{
			printf("%c", str[j]);
		}
	
	printf("\n");
}

