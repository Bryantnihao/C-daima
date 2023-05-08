#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int i = 0;
	int a = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 17 == 0)
		{
			a = i;
		}
	}
	printf("%d\n", a);
	return 0;
}