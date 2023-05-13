#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int j = 0;
	char arr[100];
	scanf("%s", &arr);
	printf("原来数组%s\n", arr);
	int   len = (int)strlen(arr);
	for (i = 0; i < len; i++)
	{
		if (arr[i] != 'a')
		{
			arr[j] = arr[i];
			j++;
		}
	}
	arr[j] = '\0';
	printf("消除a的数组%s\n", arr);
	
	return 0;
}

