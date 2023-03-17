#include<stdoi.h>
int main()

{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = abc(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
		printf("找到了，下标是：%d\n", ret);
}   return 0;
}