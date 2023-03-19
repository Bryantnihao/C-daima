#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char arr[5] = { 'a', 2 };
	char arr2[] = { 'a', 2 };
	printf("%d\n", sizeof(arr2));
	printf("%d\n", sizeof(arr));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr));


}