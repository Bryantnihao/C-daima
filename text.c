#include<stdoi.h>
int main()

{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = abc(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
}   return 0;
}