#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float weight,height,BMI;
	printf("Input your height(m) and weight(Kg):\n");
	scanf_s("%f %f",&height,&weight);
	BMI = (weight) / (height * height);
	if (BMI<18.5)
	{
		printf("Your BMI is %f.", BMI);
		printf("You are Underweight.\n");
	}
	if ((BMI>18.5) and (BMI<24.9) )
	{
		printf("Your BMI is %f.\n", BMI);
		printf("You are Normal.\n");
	}
	if ((BMI>25)and(BMI<29.9))
	{
		printf("Your BMI is %f.\n", BMI);
		printf("You are Overweight.\n");
	}
	if (BMI >30)
	{
		printf("Your BMI is %f.\n", BMI);
		printf("You are Obese.\n");
	}
	system("pause");
	return 0;
}