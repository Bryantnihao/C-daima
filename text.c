#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	int num = 0;
	int sum = 0;
	int sc = 0;
	int i = 0;
	printf("���ӡʮ������:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (num>0)
		{
			sc += 1;
			sum += num;
		}

	}
	printf("�Ǹ����ĸ���Ϊ%d,�Ǹ����ĺ�Ϊ:%d\n", sc, sum);
	return 0;
}