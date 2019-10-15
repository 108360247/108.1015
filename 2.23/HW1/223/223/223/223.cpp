#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1; 
	int num2;
	int	num3;
	printf("Input three number:\n");
	scanf_s("%d%d%d",&num1,&num2,&num3);
	if (num1 > num2)
	{
		if (num2 > num3)
		{
			printf("Max number is¡G%d\n", num1);
			printf("Min number is¡G%d\n", num3);
		}
		else
		{
			if (num1 > num3)
			{
				printf("Max number is¡G%d\n", num1);
				printf("Min number is¡G%d\n", num2);
			}
			else
			{
				printf("Max number is¡G%d\n", num3);
				printf("Min number is¡G%d\n", num2);
			}

		}
	}
	else
	{
		if (num1 > num3)
		{
			printf("Max number is¡G%d\n", num2);
			printf("Min number is¡G%d\n", num3);
		}
		else
		{
			if (num2 > num3)
			{
				printf("Max number is¡G%d\n", num2);
				printf("Min number is¡G%d\n", num1);
			}
			else
			{
				printf("Max number is¡G%d\n", num3);
				printf("Min number is¡G%d\n", num1);
			}
		}

	}
	system("pause");
	return 0;
}