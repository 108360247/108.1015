#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c,d,e,coin;
	printf("汽油一公升多少錢：\n");
	scanf_s("%d",&a);
	printf("平均一公升能行駛多少公里：\n");
	scanf_s("%d",&b);
	printf("一整天的總里程數：\n");
	scanf_s("%d",&c);
	printf(" 一天的停車費：\n");
	scanf_s("%d",&d);
	printf(" 一天的通行費(過路費)：\n");
	scanf_s("%d",&e);
	coin = a * b * c + d + e;
	printf("總金額：%d\n",coin);
	system("pause");
	return 0;
}