#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	printf("���һ���ַ���");
	scanf("%s", a);
	int len = (int)strlen(a);
	for (int i = 0; i < len; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] + 32;
		}
	}
		printf("%s", a);

	return 0;
}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[100];
//	printf("���һ���ַ���");
//	scanf("%s", a);
//	int len = (int)strlen(a);
//
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] >= 'A' && a[i] <= 'Z') {
//			a[i] = a[i] + 32;
//		}
//	}
//
//	printf("�������ַ���Ϊ��%s\n", a);
//
//	return 0;
//}