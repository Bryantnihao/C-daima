#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{    
	int a[] = { 1, 2, 3, 5, 6 };
	int *p = a;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p+1));
	}
	return 0;
}