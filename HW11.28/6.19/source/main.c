#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int dice1, dice2, i,sum;
	int counter[11] = { 0 };
	srand(time(0));
	for (i = 0; i < 36000; i++)
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		sum = dice1 + dice2;
		counter[sum - 2]++;
	}
	for (i = 2; i <= 12; i++)
	{
		printf("骰子合為%2d共出現 : %d 次\n", i, counter[i - 2]);
	}
	system("pause");
	return 0;

}