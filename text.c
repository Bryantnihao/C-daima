#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int a = 0;
	int i = 0;
	scanf("%d%d", &a, &i);
	int t = a;
	int sum = 0;
      while(i > 0)
	  {
		  sum = sum + a;
		  a = a * 10;
		  a = a + t;
		  
		i--;
	}
	  printf("%d", sum);

	return 0;
}