#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	 
	int i = 0;
	int j = 0;
	int sum = 0;
	int  max = 0;
	printf("��ӡ5����");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &j);
		sum += j;
		if (j>max)
		{ 
			max = j;
		}
	}
	float veg = (float)sum / 5;
	printf("��5������ƽ��ֵ%lf,���ֵ:%d\n", veg, max);
	return 0;
}

