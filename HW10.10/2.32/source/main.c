#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height, weight;
	printf("請輸入你的身高(公尺):");
	scanf_s("%f", &height);
	printf("請輸入你的體重(公斤):");
	scanf_s("%f", &weight);
	printf("\n\n");
	printf("以下是你的BMI值: ");
	printf("%f\n", weight / (height * height));

	float bmi = weight / (height * height);
	
		if (bmi < 18.5)
			printf("你的BMI值屬於過輕\n");
		else if  (bmi < 25)
			printf("你的BMI值屬於適中\n");
		else if  (bmi < 30)
			printf("你的BMI值屬於過重\n");
		else   
			printf("你的BMI值屬於超重\n");
	  
		printf("\n");

	
	system("pause");
	return 0;
}