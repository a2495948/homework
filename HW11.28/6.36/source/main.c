
#include <stdio.h>
#include <stdlib.h>

void change(char str[]);

int main(int argc, char* argv[])
{
	char str[50];

	printf("�п�J�@�Ӧr��:");
	gets(str);
	change(str);

	system("pause");
	return 0;
}
void change(char str[])
{
	int i, j=0;
	for (i = 0; str[i] != '\0'; i++);
	
		printf("�ഫ�᪺�r��:");
		for (j = i - 1; j >= 0; j--)
		{
			printf("%c", str[j]);
		}
	
	printf("\n");
}

