#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void  abc(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
	 
		int b = 1;
			for (j = 0; j < sz -b; j++)
			{
				if(arr[j]>arr[j+1])
				{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
			b++;
		
	} 
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	abc(arr, sz);
		int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}