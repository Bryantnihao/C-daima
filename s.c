#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp_int(const *e1, const *e2)
{
	return *(int*)e1 - *(int*)e2;
}
void  text1()
{
	int arr[] = { 2, 1, 3, 4, 8, 5, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int  cmp_float(const *e1, const *e2)
{
	return  (int)*(float*)e2 - (int)*(float*)e1;
}
void text2()
{
	float f[] = { 2.0,3.0,1.0,4.0,5.0,};
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
		int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", f[i]);
	}
}
int main()
{
	text1();
	text2();
	
	return 0;
}