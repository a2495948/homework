#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight;
	printf("�п�J�A������(����):");
	scanf_s("%f", &height);
	printf("�п�J�A���魫(����):");
	scanf_s("%f", &weight);
	printf("\n\n");
	printf("�H�U�O�A��BMI��: ");
	printf("%f\n", weight / (height * height));

	float bmi = weight / (height * height);
	
		if (bmi < 18.5)
			printf("�A��BMI���ݩ�L��\n");
		else if  (bmi < 25)
			printf("�A��BMI���ݩ�A��\n");
		else if  (bmi < 30)
			printf("�A��BMI���ݩ�L��\n");
		else   
			printf("�A��BMI���ݩ�W��\n");
	  
		printf("\n");

	
	system("pause");
	return 0;
}