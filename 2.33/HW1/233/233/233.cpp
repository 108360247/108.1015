#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c,d,e,coin;
	printf("�T�o�@���ɦh�ֿ��G\n");
	scanf_s("%d",&a);
	printf("�����@���ɯ��p�h�֤����G\n");
	scanf_s("%d",&b);
	printf("�@��Ѫ��`���{�ơG\n");
	scanf_s("%d",&c);
	printf(" �@�Ѫ������O�G\n");
	scanf_s("%d",&d);
	printf(" �@�Ѫ��q��O(�L���O)�G\n");
	scanf_s("%d",&e);
	coin = a * b * c + d + e;
	printf("�`���B�G%d\n",coin);
	system("pause");
	return 0;
}