#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2,a;
	printf("Input two number¡G");
	scanf_s("%d %d",&num1,&num2);
	a = 2 * num2;
	if (a == num1)
	{
		printf("The first is multiple of the second.");
	}
	else
	{
		printf("The first isn't multiple of the second.");
	}
	system("pause");
	return 0;
}