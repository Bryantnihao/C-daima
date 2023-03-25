#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int i, k;
	for (i = 1; i < 10; i++)
	{
		for (k = 1; k <=i; k++)
		{
			
			a = i*k;
			printf("%d*%d=%-3d", i, k, a);
		}
		printf("\n");
	}
	return 0;
}