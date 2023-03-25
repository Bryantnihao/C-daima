#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	
//	int* arr[3] = { &a,&b,&c };
//	for (i = 0; i < 3; i++)
//	{
//
//		printf("%d\n",*(arr[i]));
//	}
//}
int main()
{
	int a = 10;
	int* pa = &a;
	int** pb = &pa;
	printf("%p\n", &(**pb));
	printf("%p\n", &a);
	printf("%p\n",&( *pa));
	return 0;
}
