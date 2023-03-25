#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{    
	int x, y, z;
	scanf("%d %d %d",&x, &y, &z);
		if (x >y)
		{
			int d = 0;
			d = x;
			x = y;
			y= d;
		}
		if (x > z)
		{
			int a = 0;
			a = x;
			x = z;
			z = a;
		}
		if (y > z)
		{
			int b = 0;
			b = y;
			y = z;
			z = b;
		}
		printf("%d %d %d", x, y, z);
	return 0;
} 