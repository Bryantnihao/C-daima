#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int sum = 0;
	int i = 0;
	for (i = 0; i < 200; i++)
	{
		if (i % 5 != 0)
		{
			sum +=i;
		}
	}
	printf("%d\n", sum);
	return 0;
}

