#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* abc(char *s)
{
	char *t = s;
	char  len = strlen(s);
	char *a = s + len - 1;
	for (int i = 0; i < len / 2; i++)
	{
	  char tem = *s;
			*s = *a;
		*a = tem;
		s++;
		a--;
	}

	return t;

}
int main()
{
	char arr[] = "www.runoob.com";
	
	printf("%s", abc(arr));
	return 0;
}