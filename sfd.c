#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[30];
	int age;
};
int abc(const void*e1, const void*e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void text()
{
	struct stu s[] = { { "lisi", 20 }, { "zhangsna", 203 }, { "sdfaf", 21 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), abc);



}
int main()
{
	text();
}