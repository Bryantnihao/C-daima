#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Sut
{
	char name[20];
	int age;
	char  id[20];
};
int main()
{

	struct Sut s1 = { "张三", 20, "2131231232" };
	struct Sut  s2 = { "李四", 22, "432143443214" };
	struct Sut*  pa2 = &s2;
	struct Sut*  pa = &s1;
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	printf("%s\n", (*pa).name);
	printf("%d\n", (*pa).age);
	printf("%s\n", (*pa).id);
	printf("%s\n", pa2->name);
	printf("%d\n", pa2->age);
	printf("%s\n", pa2->id);

}
