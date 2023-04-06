#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 5;
	int*b = &a;
	int* *c = &b;
	 **c = 10;
	printf("%d %d %d", a, *b, **c);
	printf("\n");
	printf("%p %p %p", &a, b, *c);
	return 0;
}