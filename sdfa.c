#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int i = 0;

	int sum = 0;
	int n = 0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		int  ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret = ret*j;
			
		}
		sum = sum + ret;
		
	}
	printf("%d", sum);
	
}