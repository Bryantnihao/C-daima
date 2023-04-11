#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_abc(int (*arr)[5], int x, int y)
{
	int j = 3;
	int z = 5;
	for (j = 0; j < x; j++)
	{
		int z = 0;
		for (z = 0; z < y; z++)
		{
			printf("%d ",*(*(arr+j)+z) );
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3 }, { 2, 3, 4, }, { 3, 4, 5 } };
		my_abc(arr, 3, 5);
 
	return 0;
}