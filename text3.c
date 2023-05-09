#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int i = 0;
	int sum = 0;
	for (i = 0; i < 125; i++)
	{
		if (i %2 == 0)
		{     
			sum += i;
		}
	}
	printf("125以内的偶数和为%d\n", sum);
	return 0;
}