#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	printf("请打印一个数:");
	scanf("%d", &i);
	if (i > 0)
	{
		printf("z\n" );
	}
     else 
	{
		printf("f\n" );
	}
if (i % 2 == 0)
	 {
		 printf("o\n" );
	 }
	  else
	 {
		  printf("j\n");
	 }
	return 0;
}

