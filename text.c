#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int num = 0;
	int sum = 0;
	int sc = 0;
	int i = 0;
	printf("请打印十个整数:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num>0)
		{
			sc += 1;
			sum += num;
		}

	}
	printf("非负数的个数为%d,非负数的和为:%d\n", sc, sum);
	return 0;
}