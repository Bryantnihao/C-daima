#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
  	 int sum = 0;
	for (i = 200; i < 400; i++)
	{
		if (i % 3 != 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return 0;
}