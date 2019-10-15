#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,a;
	printf("Input one number¡G\n");
	scanf_s("%d",&num);
	a = num % 2;
	if (a == 1)
	{
		printf("This number is Odd.");
	}
	else
	{
		printf("This number is Even.");
	}

	return 0;
}