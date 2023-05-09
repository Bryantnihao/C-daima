#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Sum()
{    
	int i = 0;
	int a = 0;
	int num = 0;
	printf("请输入5个数:");
	for (i = 0; i < 5; i++)
	{ 
		
		scanf("%d", &a);
		num += a;
	}

	return num;
}
int main()
{  
	    
	int ad = Sum();
	printf("5个数的和为:%d\n", ad);
	return 0;
}
