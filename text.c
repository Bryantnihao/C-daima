#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a = 2;
	double b = 1;
	double  sum = 0;
	double i = 0;
	for (i = 0; i < 20; i++)
	{
		sum = sum + a / b;
		int t = 0;
		t = a;
		a = b + a;
		b = t;
	}
	printf("%lf\n", sum);
	return 0;
}